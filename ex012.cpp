#include <iostream>
using namespace std;
int main()
{
    char a[10];
    {
        char a[10], b[10];
        cin >> a >> b;
        cout << a << endl;
        cout << b << endl;

        cout << a << ' ' << b << endl;
    }


    return 0;
}
