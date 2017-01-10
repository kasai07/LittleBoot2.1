/*
*   fs.c
*/

#include "fs.h"
#include "memory.h"
#include "fatfs/ff.h"

static FATFS fs;

u32 mountSD(void)
{
    return f_mount(&fs, "0:", 1) == FR_OK;
}


u32 fileRead(void *dest, const char *path)
{
    FIL file;
    u32 size;

    if(f_open(&file, path, FA_READ) == FR_OK)
    {
        unsigned int read;
        size = f_size(&file);
        f_read(&file, dest, size, &read);
        f_close(&file);
    }
    else size = 0;

    return size;
}
