#include <cstdlib>
#include <windows.h>
using namespace std;
int main() {
    system("pause");
    Sleep(2000);
    SetCursorPos(1330, 840);
    for (int i=0;i<10000;i++)
    {
        mouse_event(MOUSEEVENTF_LEFTDOWN, 0, 0, 0, 0);
        mouse_event(MOUSEEVENTF_LEFTUP, 0, 0, 0, 0);
    }
    return 0;
}
// Copyright by xrdrsp and Dovuq.
