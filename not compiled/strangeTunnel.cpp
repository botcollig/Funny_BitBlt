#include <iostream>
#include <Windows.h>
int main()
{
    HDC hdcDest = GetDC(0);
    int w = GetSystemMetrics(0);
    int h = GetSystemMetrics(1);

    while (1)
    {
        StretchBlt(hdcDest, -10, -10, w - 20, h - 20, hdcDest, 0, 0, w, h, 0x440328u);
        StretchBlt(hdcDest, 10, 10, w - 20, h - 20, hdcDest, 0, 0, w, h, 0x660046u);
    }
}