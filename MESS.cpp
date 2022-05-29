#include <iostream>
#include <Windows.h>

int x = 1920, y = 1080;
auto hdc = GetWindowDC(GetDesktopWindow());
struct tagRECT Rect;
HBRUSH hBrush;
void Icons() {
    int i = 1;
    while (i <= 350)
    {
        DrawIcon(hdc, rand() % x, rand() % y, LoadIcon(nullptr, IDI_WARNING));
        DrawIcon(hdc, rand() % x, rand() % y, LoadIcon(nullptr, IDI_QUESTION));
        DrawIcon(hdc, rand() % x, rand() % y, LoadIcon(nullptr, IDI_INFORMATION));//Crazy Icon
        DrawIcon(hdc, rand() % x, rand() % y, LoadIcon(nullptr, IDI_ERROR));
        DrawIcon(hdc, rand() % x, rand() % y, LoadIcon(nullptr, IDI_WINLOGO));
        i++;
    }
}

int main()
{
    Icons();
    int i = 1;
    while (i <= 23) {
        //Skidded from Magnetar
        int width, height;
        HWND hwnd;
        width = GetSystemMetrics(SM_CXSCREEN);
        height = GetSystemMetrics(SM_CYSCREEN);
        hwnd = GetDesktopWindow();    HDC hdc = GetDC(NULL);
        RECT rekt;
        GetWindowRect(hwnd, &rekt);
        HBRUSH rainbow = CreateSolidBrush(RGB(rand() % 255, rand() % 255, rand() % 255));
        SelectObject(hdc, rainbow);
        int xyrng = rand() % width, h = height - rand() % width - (width / 2 - 110);
        POINT pt3[3];
        int inc3 = 60;
        inc3++;
        pt3[0].x = rekt.left + inc3;
        pt3[0].y = rekt.top - inc3;
        pt3[1].x = rekt.right + inc3;
        pt3[1].y = rekt.top + inc3;
        pt3[2].x = rekt.left - inc3;
        pt3[2].y = rekt.bottom - inc3;
        PlgBlt(hdc, pt3, hdc, rekt.left, rekt.top, rekt.right - rekt.left, rekt.bottom - rekt.top, NULL, NULL, NULL);
        PlgBlt(hdc, pt3, hdc, rekt.left, rekt.top, rekt.right - rekt.left, rekt.bottom - rekt.top, NULL, NULL, NULL);
        StretchBlt(hdc, -16, -16, width + 32, height + 32, hdc, NULL, NULL, width, height, SRCCOPY);
        StretchBlt(hdc, 16, 16, width - 32, height - 32, hdc, NULL, NULL, width, height, SRCCOPY);
        PlgBlt(hdc, pt3, hdc, rekt.left, rekt.top, rekt.right - rekt.left, rekt.bottom - rekt.top, NULL, NULL, NULL);
        PlgBlt(hdc, pt3, hdc, rekt.left, rekt.top, rekt.right - rekt.left, rekt.bottom - rekt.top, NULL, NULL, NULL);
        StretchBlt(hdc, -16, -16, width + 32, height + 32, hdc, NULL, NULL, width, height, SRCCOPY);
        StretchBlt(hdc, 16, 16, width - 32, height - 32, hdc, NULL, NULL, width, height, SRCCOPY);
        PlgBlt(hdc, pt3, hdc, rekt.left, rekt.top, rekt.right - rekt.left, rekt.bottom - rekt.top, NULL, NULL, NULL);
        PlgBlt(hdc, pt3, hdc, rekt.left, rekt.top, rekt.right - rekt.left, rekt.bottom - rekt.top, NULL, NULL, NULL);
        StretchBlt(hdc, -16, -16, width + 32, height + 32, hdc, NULL, NULL, width, height, SRCCOPY);
        StretchBlt(hdc, 16, 16, width - 32, height - 32, hdc, NULL, NULL, width, height, SRCCOPY);
        PlgBlt(hdc, pt3, hdc, rekt.left, rekt.top, rekt.right - rekt.left, rekt.bottom - rekt.top, NULL, NULL, NULL);
        PlgBlt(hdc, pt3, hdc, rekt.left, rekt.top, rekt.right - rekt.left, rekt.bottom - rekt.top, NULL, NULL, NULL);
        StretchBlt(hdc, -16, -16, width + 32, height + 32, hdc, NULL, NULL, width, height, SRCCOPY);
        StretchBlt(hdc, 16, 16, width - 32, height - 32, hdc, NULL, NULL, width, height, SRCCOPY);
        DrawIcon(hdc, rand() % x, rand() % y, LoadIcon(nullptr, IDI_ERROR));
        i++;
    }
}
