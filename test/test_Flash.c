#ifdef TEST

#include "unity.h"

#include "Flash.h"
#include "mock_IO.h"

void setUp(void)
{
}

void tearDown(void)
{
}

void test_WriteSucceeds_ReadyImmediately(void) {
    int result = 0;
    IO_Write_Expect(0, 0x40);
    IO_Write_Expect(0x1000, 0xBEAF);
    //IO_Read_ExpectAndReturn(0, 1<<7);
    //IO_Read_ExpectAndReturn(0x1000, 0xBEAF);

    result = Flash_Write(0x1000, 0xBEAF);
    TEST_ASSERT_EQUAL_INT(0, result);
}

#endif // TEST
