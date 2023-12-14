#ifdef TEST

#include "unity.h"

#include "LightScheduler.h"
#include "LightControllerSpy.h"

void setUp(void)
{
    LightController_Create();
}

void tearDown(void)
{
}
/*
void test_ScheduleOnEverydayNotTimeYet(void) {
    LighScheduler_ScheduleTurnOn(3, EVERYDAY, 1200);
}
*/

void test_NoChangeToLightsDuringInitialization(void) {
    TEST_ASSERT_EQUAL(LIGHT_ID_UNKNOWN, LightControllerSpy_GetLastId());
    TEST_ASSERT_EQUAL(LIGHT_STATE_UNKNOWN, LightControllerSpy_GetLastState());
}
        

#endif // TEST
