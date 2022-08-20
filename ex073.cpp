#include <iostream>
using namespace std;
int main()
{
    int a,b,c=0;
    a=b=5;
    while(a<1000000) {
        cout << a << '\n';
        a*=b;
        c++;
    }
    cout << c << '\n';

    return 0;
}
