#include <iostream>
using namespace std;
int main()
{
    cout << sizeof(bool) << endl;
    cout << sizeof(char) << endl;
    cout << sizeof(int) << endl;
    cout << sizeof(short int) << endl;
    cout << sizeof(float) << endl;
    cout << sizeof(double) << endl;
    cout << sizeof(long long int) << endl;
    bool b = true; ///변수초기화
    char c = 'A' ;
    int i = 2147483647;
    short int s = 32767;
    long long int l = 1e10;
    float f = 3.14;
    double d = 3.141592653589793;
    cout << sizeof(b) << endl;
    cout << sizeof(c) << endl;
    cout << sizeof(i) << endl;
    cout << sizeof(s) << endl;
    cout << sizeof(f) << endl;
    cout << sizeof(f) << endl;
    cout << sizeof(d) << endl;
    cout << sizeof(l) << endl;
    cout << sizeof(i+l) << endl;
    cout << sizeof(c+i) << endl;
    cout << 100000000LL * 100000000 << endl;










    return 0;
}
