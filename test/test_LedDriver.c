#ifdef TEST

#include "unity.h"

#include "LedDriver.h"

void setUp(void) {}

void tearDown(void) {}

void test_LedsOffAfterCreate(void) {
    uint16_t virtualLeds = 0xffff;
    LedDriver_Create(&virtualLeds);
    TEST_ASSERT_EQUAL(0, virtualLeds);
}

void test_TurnOnLedOne(void) {
    uint16_t virtualLeds;
    LedDriver_Create(&virtualLeds);
    LedDriver_TurnOn(1);
    TEST_ASSERT_EQUAL_HEX16(1, virtualLeds);
}

#endif // TEST
