#include "uv.h"

static void uv_task()
{
    ESP_LOGI(UVTAG , "Task Started\n");
    while (1) {
        uint16_t read = uv_read();
        
        vTaskDelay(pdMS_TO_TICKS(1000));
    }
}

void uv_init()
{
    adc_config_t adc_config;

    adc_config.mode = ADC_READ_TOUT_MODE;
    adc_config.clk_div = 8; 
    ESP_ERROR_CHECK(adc_init(&adc_config));
    ESP_LOGI(UVTAG , "ADC started\n");
    xTaskCreate(uv_task, "UV_task", 1024, NULL, 5, NULL);
}

uint16_t uv_read()
{
    uint16_t adc_data[100];
    if (ESP_OK == adc_read(&adc_data[0])) {
        ESP_LOGI(UVTAG , "adc read: %d\r\n", adc_data[0]);
    }
    return adc_data[0];
}