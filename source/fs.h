/*
*   fs.h
*/

#pragma once

#include "types.h"



u32 mountSD(void);
u32 fileRead(void *dest, const char *path);
