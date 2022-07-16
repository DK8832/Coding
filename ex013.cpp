#include <iostream>
using namespace std;
int main()
{
    char str[100];
    cin.getline(str, 100);
    cout << str << endl;
    double d;
    cin >> d;
    cout.precision(6);
    cout << fixed << d << endl;



        return 0;
}
