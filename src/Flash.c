#include "Flash.h"
#include "IO.h"

int Flash_Write(ioAddress address, ioData data) {
    IO_Write(0, 0x40);
    IO_Write(address, data);
    return -1;
}

