#ifndef UV_H
#define UV_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "freertos/FreeRTOS.h"
#include "freertos/task.h"

#include "driver/adc.h"
#include "esp_log.h"

static const char *UVTAG = "UV Sensor";

static void uv_task();
void uv_init();
uint16_t uv_read();

#endif 