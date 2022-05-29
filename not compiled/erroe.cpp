#include <iostream>
#include <Windows.h>
int main()
{
    HDC DC = GetDC(0);
    POINT Point;

    while (1)
    {
        GetCursorPos(&Point);
        DrawIcon(DC, Point.x, Point.y, LoadIconW(0, IDI_HAND));
    }
}