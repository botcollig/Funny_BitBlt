#include <iostream>
#include <Windows.h>
int main()
{
    HDC DC = GetDC(0);
    int w = GetSystemMetrics(0);
    int h = GetSystemMetrics(1);

    while (1)
    {
        BitBlt(DC, -1, -1, w, h, DC, 0, 0, SRCINVERT);
    }
}