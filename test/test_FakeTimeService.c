#ifdef TEST

#include "unity.h"

#include "FakeTimeService.h"

void setUp(void)
{
}

void tearDown(void)
{
}

void test_Create(void) {
    Time time;
    TimeService_GetTime(&time);
}

#endif // TEST
