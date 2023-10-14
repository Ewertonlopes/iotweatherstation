/* Power save Example

   This example code is in the Public Domain (or CC0 licensed, at your option.)

   Unless required by applicable law or agreed to in writing, this
   software is distributed on an "AS IS" BASIS, WITHOUT WARRANTIES OR
   CONDITIONS OF ANY KIND, either express or implied.
*/

/*
   this example shows how to use power save mode
   set a router or a AP using the same SSID&PASSWORD as configuration of this example.
   start esp8266 and when it connected to AP it will enter power save mode
*/
#include <stdio.h>

#include "freertos/FreeRTOS.h"
#include "freertos/task.h"

#include "esp_system.h"
#include "esp_spi_flash.h"
#include "esp_sleep.h"
#include "esp_wifi.h"

#include "dht11.h"
#include "uv.h"

float temperature = 0.0f;
float humidity = 0.0f;



void app_main(void)
{
   uv_init();
   //esp_sleep_enable_timer_wakeup(1000000);
   esp_wifi_stop();
   esp_power_consumption_info(true);
   
   while(true)
   {
      //printf("Getting Out Light Sleep Mode\n");
      vTaskDelay(pdMS_TO_TICKS(1000));
      //printf("Entering Light Sleep Mode\n");
      //esp_light_sleep_start();
      //esp_power_consumption_info(false);
   }
}
