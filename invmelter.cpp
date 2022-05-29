#include <windows.h>

int main(void)
{
	HDC desk = GetDC(0);
	int x = GetSystemMetrics(0);
	int y = GetSystemMetrics(1);
	int i = 1;
	while (i <= 85)
	{
		desk = GetDC(0);
		HDC hdc = GetDC(0);
		int x = SM_CXSCREEN;
		int y = SM_CYSCREEN;
		int w = GetSystemMetrics(0);
		int h = GetSystemMetrics(1);
		PatBlt(desk, 0, 0, x, y, PATINVERT);
		BitBlt(hdc, rand() % 222, rand() % 222, w, h, hdc, rand() % 222, rand() % 222, NOTSRCERASE);
		hdc = GetDC(0);
		x = rand() % w;
		BitBlt(hdc, x, 1, 10, h, hdc, x, 0, SRCCOPY);
		Sleep(100);
		i++;
	}
}