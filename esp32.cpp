#include "WS2812.h"

WS2812* neoPixel;

void begin_esp32(uint8_t pin, uint16_t count){
    neoPixel = new WS2812((gpio_num_t)pin, count);
}

void esp32Show(uint8_t pin, uint8_t *pixels, uint16_t numBytes, uint8_t type) {
    for(int i=0; i<numBytes/3; i++){
        pixel_t pix;
        pix.red = *(pixels++);
        pix.green = *(pixels++);
        pix.blue = *(pixels++);
        neoPixel->setPixel(i, pix);
    }
    neoPixel->show();
}
