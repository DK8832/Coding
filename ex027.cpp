#include <iostream>
using namespace std;
int main()
{
    int n=1;
    cin >> n;
    cout << (n==1?1972:0) << endl;
    cout << (n!=1?1972:0) << endl;
    cout << (n>=0?'+':'-') << endl;
    cout << (n%2==0?"even":"odd") << endl;




    return 0;
}
