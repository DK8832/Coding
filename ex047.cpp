#include <iostream>
#include <windows.h>
using namespace std;
int main()
{
    int a;
    cin >> a;
    switch(a/10) {
    case 10:
    cout << "A" << endl;
    case 9:
        cout << "A" << endl;
        break;
    case 8:
    case 7:
        cout << "B" << endl;
        break;
    case 6:
    case 5:
    case 4:
        cout << "C" << endl;
        break;
    default:
        cout << "F" << endl;
        break;
    }

    return 0;
}
