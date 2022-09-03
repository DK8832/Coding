#include <iostream>
using namespace std;
int main()
{
    int n;

    abc:
    cin >>n;
    if(n!=0) {
        cout << n << '\n';
        goto abc;
    }

    return 0;
}
