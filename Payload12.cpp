#include <iostream>
#include <Windows.h>

int main()
{
    HDC desk = GetDC(0);
    //Lmfao mf
    int x = GetSystemMetrics(0), y = GetSystemMetrics(1);
    int x1 = GetSystemMetrics(0), y1 = GetSystemMetrics(1);
    int sw = GetSystemMetrics(0), sh = GetSystemMetrics(1);
    int ry = GetSystemMetrics(0), rx = GetSystemMetrics(1);
    int i = 1;
    while (i <= 1) {
        desk = GetDC(0);
        int x = rand() % y;
        int y = rand() % x;
        for (int i = 0; i < 1; i++) {
            BitBlt(desk, x1, 3, y1, y1, desk, x1, 0, SRCCOPY);
            BitBlt(desk, x, -2, -y, x, desk, x, 0, SRCCOPY);
            BitBlt(desk, 3, y1, y1, x1, desk, 0, x1, SRCCOPY);
            BitBlt(desk, -6, x, -y, x, desk, 0, y, SRCCOPY);
            BitBlt(desk, x1, 3, y1, y1, desk, x1, 0, SRCCOPY);
            BitBlt(desk, x, -2, -y, x, desk, x, 0, SRCCOPY);
            BitBlt(desk, 3, y1, y1, x1, desk, 0, x1, SRCCOPY);
            BitBlt(desk, -6, x, -y, x, desk, 0, y, SRCCOPY);
            BitBlt(desk, rx, 1, sw, sh, desk, rx, 0, SRCCOPY);
            BitBlt(desk, rx, -1, -sw, sh, desk, rx, 0, SRCCOPY);
            BitBlt(desk, 1, ry, sw, sh, desk, 0, ry, SRCCOPY);
            BitBlt(desk, -1, ry, -sw, sh, desk, 0, ry, SRCCOPY);i++;      
        }
    }
}