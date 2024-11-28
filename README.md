# Low Cost Disposable Baby Incubator With Health Monitoring and ECG Visualization Capabilities

This project integrates Arduino and Python to create a comprehensive health monitoring system that tracks multiple vital parameters—such as heart rate, SpO₂ levels, temperature, and humidity—alongside jaundice detection using an RGB color sensor. Additionally, the system serves as a **basic incubator controller** by monitoring and regulating temperature and humidity, which are essential for neonatal care. Data collected by Arduino from the sensors is transmitted to a computer, where a Python PyQt-based interface visualizes ECG signals in real-time.

![My Image](Incubator_Design.png)

This figure demonstrates the modularity and cost-efficiency of the design. It illustrates how the disposable infant chamber is made from insulated cardboard and flat-packed for easy assembly. This chamber integrates seamlessly with a reusable control module that includes temperature regulation and power systems. Additionally, an optional cooling module, designed to accommodate diverse environmental needs, can be attached to enhance functionality.

![My Image](Incubator_Design_2.png)

The thermal analysis in this figure highlights the importance of precise heat insulation. A controlled environmental chamber replicates varying climates to test temperature stability. The incubator’s lid, made of triple-paned clear polyvinylchloride (PVC) film, offers superior insulation while maintaining visibility, reducing energy loss, and ensuring a stable internal environment for neonatal care.

![My Image](Incubator_Design_3.png)

This sequence showcases the step-by-step assembly of the flat-packable infant chamber. The lightweight and disposable design emphasizes portability and cost-effectiveness, catering to low-resource settings. The final prototype combines ease of use with innovative thermal management solutions, such as the optional cooling unit and a thermal bank, tailored for extended off-grid operation.

## Contents

- [Overview](#overview)
- [Key Features](#key-features)
- [Mobile Interface](#mobile-interface)
- [Additional Information](#additional-information)

## Overview

This health monitoring and ECG visualization system is designed with neonatal applications in mind, especially for incubator settings. It comprises two main components:

- **Arduino**: Reads data from a variety of sensors (heart rate, SpO₂, temperature, humidity, and RGB) and transmits it to a connected computer.
- **Python PyQt GUI**: Uses PyQtGraph for real-time ECG visualization, displaying dynamic, animated waveforms based on collected heart rate data.

## Key Features

- **Heart Rate and SpO₂ Monitoring**: Utilizing the MAX30100 sensor for accurate BPM and blood oxygen levels.
- **Temperature and Humidity Tracking**: Employs the DHT11 sensor to gauge environmental conditions.
- **Jaundice Detection**: Measures RGB color values through an RGB sensor to aid in jaundice assessment.
- **Incubator Temperature Control**: Basic functionality to regulate temperature via relay and fan control, enabling essential thermal management.
- **ECG Visualization**: Displays animated ECG data, derived from BPM input, to provide a clear, live representation of cardiac activity.

## Mobile Interface

A mobile app interface was also developed for remote monitoring capabilities.  
[Mobile Application Demo Link to be Updated Soon](youtube.com)

---

This project offers a scalable approach to health monitoring, combining sensor-based data collection with an intuitive GUI for real-time ECG visualization and temperature control—ideal for applications in healthcare and neonatal care monitoring.
