#include <iostream>
#include <Windows.h>

int main()
{
    ULONGLONG uVar1;
    DWORD64 uVar2;
    UINT uVar3;
    int iVar4;
    HDC hDC;
    UINT uVar5;
    int iVar6;
    int iVar7;
    tagCURSORINFO local_1c;

    uVar3 = GetSystemMetrics(0);
    iVar4 = GetSystemMetrics(1);
    hDC = GetDC((HWND)0x0);
    do {
        do {
            while (true) {
                while (true) {
                    uVar1 = __rdtsc();
                    iVar7 = 0;
                    uVar5 = (UINT)uVar1 & 3;
                    if ((uVar1 & 3) != 0) break;
                    uVar2 = __rdtsc();
                    uVar5 = (UINT)uVar2 ^ (UINT)uVar2 << 0xd;
                    uVar5 = uVar5 ^ uVar5 << 0x11;
                    uVar5 = (uVar5 << 5 ^ uVar5) % uVar3;
                    if (0 < iVar4) {
                        do {
                            local_1c.cbSize = 0x14;
                            GetCursorInfo(&local_1c);
                            DrawIcon(hDC, uVar5, iVar7, local_1c.hCursor);
                            uVar5 = uVar5 + 2;
                            if ((int)uVar3 <= (int)uVar5) {
                                iVar7 = iVar4;
                            }
                            Sleep(1);
                            iVar7 = iVar7 + 2;
                        } while (iVar7 < iVar4);
                    }
                }
                if (uVar5 == 1) break;
                if (uVar5 == 2) {
                    uVar2 = __rdtsc();
                    uVar5 = (UINT)uVar2 ^ (UINT)uVar2 << 0xd;
                    uVar5 = uVar5 ^ uVar5 << 0x11;
                    uVar5 = (uVar5 << 5 ^ uVar5) % uVar3;
                    if (0 < iVar4) {
                        do {
                            local_1c.cbSize = 0x14;
                            GetCursorInfo(&local_1c);
                            DrawIcon(hDC, uVar5, iVar7, local_1c.hCursor);
                            uVar5 = uVar5 - 2;
                            if ((int)uVar5 < 1) {
                                iVar7 = iVar4;
                            }
                            Sleep(1);
                            iVar7 = iVar7 + 2;
                        } while (iVar7 < iVar4);
                    }
                }
                else if (uVar5 == 3) {
                    uVar2 = __rdtsc();
                    uVar5 = (UINT)uVar2 ^ (UINT)uVar2 << 0xd;
                    uVar5 = uVar5 ^ uVar5 << 0x11;
                    uVar5 = (uVar5 << 5 ^ uVar5) % uVar3;
                    iVar7 = GetSystemMetrics(1);
                    while (0 < iVar7) {
                        local_1c.cbSize = 0x14;
                        GetCursorInfo(&local_1c);
                        DrawIcon(hDC, uVar5, iVar7, local_1c.hCursor);
                        uVar5 = uVar5 - 2;
                        Sleep(1);
                        iVar6 = 0;
                        if (0 < (int)uVar5) {
                            iVar6 = iVar7;
                        }
                        iVar7 = iVar6 + -2;
                    }
                }
            }
            uVar2 = __rdtsc();
            uVar5 = (UINT)uVar2 ^ (UINT)uVar2 << 0xd;
            uVar5 = uVar5 ^ uVar5 << 0x11;
            uVar5 = (uVar5 << 5 ^ uVar5) % uVar3;
            iVar7 = GetSystemMetrics(1);
        } while (iVar7 < 1);
        do {
            local_1c.cbSize = 0x14;
            GetCursorInfo(&local_1c);
            DrawIcon(hDC, uVar5, iVar7, local_1c.hCursor);
            uVar5 = uVar5 + 2;
            Sleep(1);
            if ((int)uVar3 <= (int)uVar5) break;
            iVar7 = iVar7 + -2;
        } while (0 < iVar7);
    } while (true);
}