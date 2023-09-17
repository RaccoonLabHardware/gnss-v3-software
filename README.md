# RaccoonLab GNSS v3

This is a template repository for RaccoonLab GNSS v3:
- L1/L2 RTK ZED-F9P,
- L1 NEO-M8N,

The core of this repository is the [gps_mag_baro_v3.ioc](gps_mag_baro_v3.ioc) file that defines the stm32 peripherals with respect to what a real device has.

The peripheral configuration is shown below:

<img src="Assets/stm32cubemx.png" alt="drawing">

This repository is based on `STM32CubeMX v6.6.0`.

The generated source files should be used as part of c++ project. The entry point is [Core/Src/main.cpp](Core/Src/main.cpp). This file initializes all the periphery and then goes into `application_entry_point()`. This function should be implemented by a user.

Reference:
- [GNSS V3 ZED-F9P with internal antenna docs](https://docs.raccoonlab.co/guide/gps_mag_baro/gps_l1_l2_zed_f9p.html),
- [GNSS V3 ZED-F9P with external antenna docs](https://docs.raccoonlab.co/guide/gps_mag_baro/gnss_external_antenna_f9p_v320.html),
- [Hardware](https://github.com/RaccoonLabHardware/GPS-MAG-BARO).
