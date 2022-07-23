#include <iostream>
#include <windows.h>
using namespace std;
int main()
{
    cout << "Only capital case!!! [A~D or others]" << endl;
    char a;
    cin >> a;
    switch(a) {
    case 'A':
        cout << "BEST!!!" << endl;
        break;
    case 'B':
        cout << "GOOD!!!" << endl;
        break;
    case 'C':
        cout << "RUN!!!" << endl;
        break;
    case 'D':
        cout << "SLOWLY~" << endl;
        break;
    default:
        cout << "WHAT" << endl;
        break;



    }

    return 0;
}
