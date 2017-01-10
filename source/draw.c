/*
*   draw.c
*
*   Code to print to the screen by mid-kid @CakesFW
*/

#include "draw.h"
#include "memory.h"


static const struct fb {
    u8 *top_left;
    u8 *top_right;
    u8 *bottom;
} *const fb = (struct fb *)0x23FFFE00;

void clearScreens(void)
{
    memset32(fb->top_left, 0, 0x46500);
    memset32(fb->top_right, 0, 0x46500);
    memset32(fb->bottom, 0, 0x38400);
}
