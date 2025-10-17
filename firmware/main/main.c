#include <stdio.h>
#include "app_config.h"
// Replace with ESP-IDF app_main when wiring camera/BLE/ML
void app_main(void) {
  printf("EdgeGlass-ML: boot\n");
  // init clock/power, PSRAM, logging
  // camera_init(); ble_init(); ml_init();
  // capture -> preprocess -> infer -> BLE publish
}
