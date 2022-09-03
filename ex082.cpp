#include <iostream>
using namespace std;
int main()
{
    int n,a;
    cin >> a;
    abc:
    n--;
    cin >> a;
    cout << a << '\n';
    if(n>0) goto abc;



    return 0;
}
