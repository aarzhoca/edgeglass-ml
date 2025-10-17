# EdgeGlass-ML
On-device ML for **smart glasses (ESP32-S3)**: OV2640 → **TFLM/ESP-NN (int8)** → **BLE**.  
Low-power modes, **OTA/DFU**, and KPI tooling for **latency/FPS/mW**.

![CI](https://github.com/aarzhoca/edgeglass-ml/actions/workflows/build.yml/badge.svg)
![License: MIT](https://img.shields.io/badge/License-MIT-yellow.svg)

## Features
- **On-device inference** with **TensorFlow Lite Micro (TFLM)** / **ESP-NN** (int8)
- **Camera pipeline**: OV2640 → I2S/DMA → PSRAM double buffer → preproc → embeddings → **BLE**
- **Low-power**: adaptive framerate, duty cycling, sleep/retention; BLE interval tuning
- **OTA/DFU** with crash-safe rollback
- **KPIs**: latency / FPS / mW dashboards; Python benches (pyserial/pyvisa + SMU)

## Getting Started
1. Install **ESP-IDF v5.x** and Python 3.10+
2. `idf.py set-target esp32s3`
3. Configure pins and BLE params in `firmware/main/app_config.h`
4. Build/flash/monitor: `idf.py build flash monitor`

> Clean-room demo inspired by OpenGlass; don’t copy code verbatim from upstream.
