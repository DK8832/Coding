#include <iostream>
#include <windows.h>
using namespace std;
int main()
{
    cout << "ONLY 1~12" << endl;
    int a;
    cin >> a;
    switch(a) {
    case 12:
    case 1:
    case 2:
        cout << "WINTER" << endl;
        break;
    case 3:
    case 4:
    case 5:
        cout << "SPRING" << endl;
        break;
    case 6:
    case 7:
    case 8:
        cout << "SUMMER" << endl;
        break;
    case 9:
    case 10:
    case 11:
        cout << "FALL" << endl;
        break;
    }

    return 0;
}
