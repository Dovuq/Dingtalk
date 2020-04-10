#include <cstdlib>
#include <cstdio>
#include <iostream>
#include <windows.h>
using namespace std;
int main()
{
    int x,y,n;
    printf ("Input your x-coordinate: ");
    scanf ("%d",&x);
    printf ("Input your y-coordinate: ");
    scanf ("%d",&y);
    printf ("Set the number of likes (No more than 100000 recommended): ");
    scanf ("%d",&n);
    system ("pause");
    Sleep(2000);
    SetCursorPos (x,y);
    while (n--)
	{
        mouse_event(MOUSEEVENTF_LEFTDOWN, 0, 0, 0, 0);
        mouse_event(MOUSEEVENTF_LEFTUP, 0, 0, 0, 0);
    }
    return 0;
}
