# Low Cost Disposable Baby Incubator With Health Monitoring and ECG Visualization Capabilities

## Contents

- [Overview](#overview)
- [Key Features](#key-features)
- [Mobile Interface](#mobile-interface)
- [Contributors](#contributors)

## Overview

This project integrates Arduino and Python to create a comprehensive health monitoring system that tracks multiple vital parameters—such as heart rate, SpO₂ levels, temperature, and humidity—alongside jaundice detection using an RGB color sensor. Additionally, the system serves as a **basic incubator controller** by monitoring and regulating temperature and humidity, which are essential for neonatal care. Data collected by Arduino from the sensors is transmitted to a computer, where a Python PyQt-based interface visualizes ECG signals in real-time.

Our incubator system draws inspiration from the paper "Designing a Low-Cost Multifunctional Infant Incubator" by Kevin Tran, Aaron Gibson, Don Wong, Dagmawi Tilahun, Nicholas Selock, Theresa Good, Geetha Ram, Leah Tolosa, Michael Tolosa, Yordan Kostov, and others. This study outlines innovative approaches to neonatal care, focusing on cost-effective, modular designs, and infection control measures. By integrating the scientifically proven methods described in the paper, we have ensured that our incubator aligns with evidence-based best practices, making it practical and impactful in addressing critical challenges in low-resource settings.

<div align="center">
  <img src="Incubator_Design.png" alt="incubator design">
</div>

This figure demonstrates the modularity and cost-efficiency of the design. It illustrates how the disposable infant chamber is made from insulated cardboard and flat-packed for easy assembly. This chamber integrates seamlessly with a reusable control module that includes temperature regulation and power systems. Additionally, an optional cooling module, designed to accommodate diverse environmental needs, can be attached to enhance functionality.

<br>

<div align="center">
  <img src="Incubator_Design_2.png" alt="incubator design">
</div>

The thermal analysis in this figure highlights the importance of precise heat insulation. A controlled environmental chamber replicates varying climates to test temperature stability. The incubator’s lid, made of triple-paned clear polyvinylchloride (PVC) film, offers superior insulation while maintaining visibility, reducing energy loss, and ensuring a stable internal environment for neonatal care.

<br>

<div align="center">
  <img src="Incubator_Design_3.png" alt="incubator design">
</div>

This sequence showcases the step-by-step assembly of the flat-packable infant chamber. The lightweight and disposable design emphasizes portability and cost-effectiveness, catering to low-resource settings. The final prototype combines ease of use with innovative thermal management solutions, such as the optional cooling unit and a thermal bank, tailored for extended off-grid operation.

<br>

<div align="center">
  <img src="Incubator_2.jpg" alt="incubator design" width="350" height="500">
  <img src="Incubator_1.jpg" alt="incubator design" width="350" height="500">
</div>

<br>

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

## Contributors

<div align="center">
  <div style="display: inline-block; margin: 10px;">
    <img src="https://media.licdn.com/dms/image/v2/C5603AQHhefqmK0YyTQ/profile-displayphoto-shrink_400_400/profile-displayphoto-shrink_400_400/0/1630703428318?e=1738195200&v=beta&t=rvIZ-foBRPUpf6fCQNWssuVWuPA0WMuq4xoXcXH73_k" alt="Image 1" width="100">
    <p>Ibrahim Fateen</p>
    <a href="https://www.linkedin.com/in/ibrahim-fateen-a93b411ab/">LinkedIn</a>
  </div>
  <div style="display: inline-block; margin: 10px;">
    <img src="https://media.licdn.com/dms/image/v2/C4E03AQHatKR03BZarg/profile-displayphoto-shrink_400_400/profile-displayphoto-shrink_400_400/0/1647711981670?e=1738195200&v=beta&t=9Vn_XV15VVlLaZSwEuoWMjL6SNzQd2wn8W2z8k44WXA" alt="Image 2" width="100">
    <p>Youssef Abo-El-Ela</p>
    <a href="https://www.linkedin.com/in/youssef-abo-el-ela-a4a12b235/">LinkedIn</a>
  </div>
  <div style="display: inline-block; margin: 10px;">
    <img src="https://media.licdn.com/dms/image/v2/D4E03AQG6W9o6HSAzaQ/profile-displayphoto-shrink_400_400/profile-displayphoto-shrink_400_400/0/1684759057692?e=1738195200&v=beta&t=D26pupk6OyQF4DpOg-vujiFxLhJhUEuczxVvAFbj8E4" alt="Image 3" width="100">
    <p>Ali Younis</p>
    <a href="https://www.linkedin.com/in/ali-younis-98b780277/">LinkedIn</a>
  </div>
  <div style="display: inline-block; margin: 10px;">
    <img src="https://media.licdn.com/dms/image/v2/D4E03AQE4y_uk25cViw/profile-displayphoto-shrink_400_400/profile-displayphoto-shrink_400_400/0/1716320075369?e=1738195200&v=beta&t=wyDP0-8tHiRCR6EMYNMkkEc7OAgzfzzRvC1mDAp6bT4" alt="Image 4" width="100">
    <p>Omar Khaled</p>
    <a href="https://www.linkedin.com/in/omar-khaled-064b7930a/">LinkedIn</a>
  </div>
</div>
