#include driver/rmt.h"

static void setItem1(rmt_item32_t *pItem) {
	assert(pItem != nullptr);
	pItem->level0    = 1;
	pItem->duration0 = 10;
	pItem->level1    = 0;
	pItem->duration1 = 6;
} // setItem1

static void setItem0(rmt_item32_t *pItem) {
	assert(pItem != nullptr);
	pItem->level0    = 1;
	pItem->duration0 = 4;
	pItem->level1    = 0;
	pItem->duration1 = 8;
} // setItem0

void espShow32(uint8_t pin, uint8_t *pixels, uint32_t numBytes, uint8_t type) {
    
}