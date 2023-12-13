#ifndef LEDDRIVER_H
#define LEDDRIVER_H

#ifndef TEST
#include "stm32f10x.h"
#else
#include "stub_io.h"
#endif // TEST

void LedDriver_Create(uint16_t *address);
void LedDriver_TurnOn(int ledNumber);

#endif // LEDDRIVER_H
