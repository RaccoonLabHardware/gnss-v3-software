# GNSS ZED-F9P

This repository is based on STM32CubeMX v6.6.0.

This project is related to RaccoonLab gnss_mag_baro:
- [hardware](https://github.com/RaccoonLabHardware/GPS-MAG-BARO),
- [docs](https://docs.raccoonlab.co/guide/gps_mag_baro/gps_l1_l2_zed_f9p.html).

The generated source files should be used as part of c++ project. The entry point is [Core/Src/main.cpp](Core/Src/main.cpp). This file initializes all the periphery and then goes into `application_entry_point()`. This function should be implemented by a user.

<img src="Assets/stm32cubemx.png" alt="drawing">
