#include <iostream>
#include <windows.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    switch(n%3) {
    case 0:
        cout << '\a';
        Sleep(1000);
        cout << '\a';
        Sleep(1000);
        cout << '\a';
        Sleep(1000);
        break;
    case 1:
        Sleep(1000);
        cout << '\a';
        break;
    case 2:
        Sleep(1000);
        cout << '\a';
        Sleep(1000);
        cout << '\a';
        break;


    }

    return 0;
}
