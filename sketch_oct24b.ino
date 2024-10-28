#include "DHT.h"
#include <Wire.h>
#include "MAX30100_PulseOximeter.h"

// Init

#define DHTPIN 2
#define DHTTYPE DHT11

// Color sensor pin definitions (adjust as needed)
#define S0 4
#define S1 5
#define S2 6
#define S3 7
#define OUT 8

#define POX_PERIOD_MS     1000
#define COLOR_SETUP_PERIOD_MS   100  // Reading color sensor every 2 seconds
#define TEMP_PERIOD_MS    1500  // Reading temperature every 1.5 seconds
#define COLOR_PERIOD_MS 2000

#define MOTOR 3

uint32_t tsLastPoxReport = 0;
uint32_t tsLastTempReport = 0;
uint32_t tsLastColorReport = 0;
uint32_t tsLastColorSetup = 0;

PulseOximeter pox;
DHT dht(DHTPIN, DHTTYPE);

int redRGB = 0;
int greenRGB = 0;
int blueRGB = 0;

int red = 0;
int green = 0;
int blue = 0;

int maximumRed = 87;
int maximumGreen = 101;
int maximumBlue = 97;

bool is_jaundice = false;
float bpm = 0;
float spo2 = 0;
float humidity = 0;
float temperature = 0;

void readTempHumidity() {
  if (millis() - tsLastTempReport > TEMP_PERIOD_MS) {
    humidity = dht.readHumidity();
    temperature = dht.readTemperature();
    tsLastTempReport = millis();
  }

  // if (temperature >= 23) {
  //   digitalWrite(MOTOR, HIGH);
  // }
  // else {
  //   digitalWrite(MOTOR, LOW);
  // }
}

const int RED_LAST_READ = 0;
const int GREEN_LAST_READ = 1;
const int BLUE_LAST_READ = 2;

int last_read = 2;

void checkJaundice(int red, int green, int blue) {
  int jaundice_minimum_red = 150;
  int jaundice_maximum_red = 200;
  int jaundice_minimum_green = 150;
  int jaundice_maximum_green = 200;
  int jaundice_minimum_blue = 150;
  int jaundice_maximum_blue = 200;

  is_jaundice = (red >= jaundice_minimum_red && red <= jaundice_maximum_red) && (green >= jaundice_minimum_green && green <= jaundice_maximum_green) && (blue >= jaundice_minimum_blue && blue <= jaundice_maximum_blue);
}

void readColorSensor() {
  if (millis() - tsLastColorSetup > COLOR_SETUP_PERIOD_MS) {
    if (last_read == BLUE_LAST_READ) {
      blue = pulseIn(OUT, LOW);
      digitalWrite(S2, LOW);
      digitalWrite(S3, LOW); 
      last_read = RED_LAST_READ;

    } else if (last_read == RED_LAST_READ) {
      red = pulseIn(OUT, LOW);
      digitalWrite(S2, HIGH);
      digitalWrite(S3, HIGH);
      last_read = GREEN_LAST_READ;
    } else {
      green = pulseIn(OUT, LOW);
      digitalWrite(S2, LOW);
      digitalWrite(S3, HIGH);
      last_read = BLUE_LAST_READ;
    }

    tsLastColorSetup = millis();
  }
  if (millis() - tsLastColorReport > COLOR_PERIOD_MS) {
    redRGB = map(red, 0, maximumRed, 255, 0);
    greenRGB = map(green, 0, maximumGreen, 255, 0);
    blueRGB = map(blue, 0, maximumBlue, 255, 0);

    checkJaundice(redRGB, greenRGB, blueRGB);
    tsLastColorReport = millis();
  }
}

void printValues() {
  Serial.print(temperature);
  Serial.print("_");
  Serial.print(humidity);
  Serial.print("_");
  Serial.print(is_jaundice);
  Serial.print("_");
  Serial.print(spo2);
  Serial.print("_");
  Serial.println(bpm);
  // Serial.print(redRGB);
  // Serial.print("-");
  // Serial.print(greenRGB);
  // Serial.print("-");
  // Serial.println(blueRGB);
}

void readPox() {
  pox.update();
  if (millis() - tsLastPoxReport > POX_PERIOD_MS) {
    spo2 = pox.getSpO2();
    bpm = pox.getHeartRate();
    tsLastPoxReport = millis();
    printValues();
  } 
}

void onBeatDetected() {
  // Callback for when a beat is detected
}

void setup() {
  Serial.begin(9600);

  pinMode(S0, OUTPUT);
  pinMode(S1, OUTPUT);
  pinMode(S2, OUTPUT);
  pinMode(S3, OUTPUT);
  pinMode(OUT, INPUT);

  pinMode(MOTOR, OUTPUT);

  digitalWrite(MOTOR, HIGH);

  digitalWrite(S0, HIGH);
  digitalWrite(S1, HIGH);

  digitalWrite(OUT, HIGH);

  dht.begin();
  // if (dht.begin()) {
  //   Serial.println("HERE");
  // }
  pox.begin();
  // if (!pox.begin()) {
  //   Serial.println("HERE");
  // }
  pox.setIRLedCurrent(MAX30100_LED_CURR_7_6MA);
  pox.setOnBeatDetectedCallback(onBeatDetected);
}

void loop() {
  readTempHumidity();
  readPox();
  readColorSensor();
}
