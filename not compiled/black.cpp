#include <iostream>
#include <Windows.h>

int main()
{
    SetProcessDPIAware();
    int wDest;
    int iVar1;
    HDC hdcDest;
    int hDest;

    wDest = GetSystemMetrics(0);
    iVar1 = GetSystemMetrics(1);
    hdcDest = GetDC((HWND)0x0);
    do {
        do {
            hDest = 0;
        } while (iVar1 < 1);
        do {
            StretchBlt(hdcDest, 0, 0, wDest, hDest, hdcDest, 0, 0, 1, 1, 0x8800c6);
            Sleep(1);
            hDest = hDest + 6;
        } while (hDest < iVar1);
    } while (true);
}