

#include "fs.h"
#include "screeninit.h"

#include "fatfs/sdmmc/sdmmc.h"
#include "payload/payload.h"

u32 console;

void main(void)
{
    initScreens();
    sdmmc_sdcard_init();
	mountSD();

    Payload();
}

