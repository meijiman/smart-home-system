#ifndef LEDDRIVER_H
#define LEDDRIVER_H

#ifndef TEST
#include "stm32f10x.h"
#else
#include "stub_io.h"
#endif // TEST

void LedDriver_Create(uint16_t *address);
void LedDriver_TurnOn(int ledNumber);
void LedDriver_TurnOff(int ledNumber);
void LedDriver_TurnAllOn(void);
bool LedDriver_IsOn(int ledNumber);
bool LedDriver_IsOff(int ledNumber);
void LedDriver_TurnAllOff(void);

#endif // LEDDRIVER_H
