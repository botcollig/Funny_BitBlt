#include <iostream>
#include <Windows.h>
int main()
{
    HDC hdc = GetDC(0);
    int w = GetSystemMetrics(0);
    int h = GetSystemMetrics(1);
    for (;;)
    {
        int v5 = w - 5;
        int v6 = w - 20;
        StretchBlt(hdc, -5, -5, v6, v5, hdc, 0, 0, w, h, NOTSRCERASE);
        StretchBlt(hdc, 5, 5, v6, v5, hdc, 0, 0, w, h, NOTSRCERASE);
        StretchBlt(hdc, -5, -5, v6, w - 5, hdc, 0, 0, h, w, SRCINVERT);
        StretchBlt(hdc, 5, 5, v6, w - 5, hdc, 0, 0, h, w, SRCINVERT);
        Sleep(rand() % 500);
    }
}