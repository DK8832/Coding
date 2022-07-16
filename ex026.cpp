#include <iostream>
using namespace std;
int main()
{
    cout << (5&6) << endl;
    cout << (5|6) << endl;
    cout << (5^6) << endl;
    cout << (5<<1) << endl;
    cout << (5<<2) << endl;
    cout << (5<<3) << endl;
    cout << (5<<4) << endl;
    cout << (5<<5) << endl;
    cout << (9>>1) << endl;
    cout << (3==3) << endl;
    cout << (3!=3) << endl;
    cout << (3!=5) << endl;
    cout << ('A'<'B') << endl;
    cout << ('A'<'a') << endl;
    cout << ('A'=='A') << endl;
    cout << ('A'!='B') << endl;
    cout << (1<2 && 2<3) << endl;
    cout << (1<2 && 2>3) << endl;
    cout << (1>2 && 2<3) << endl;
    cout << (1>2 && 2>3) << endl;
    cout << (1<2 || 2<3) << endl;
    cout << (1<2 || 2>3) << endl;
    cout << (1>2 || 2<3) << endl;
    cout << (1>2 || 2>3) << endl;
    cout << true << endl;
    cout << !true << endl;
    cout << false << endl;
    cout << !false << endl;
    int n=1;
    cin >> n;
    cout << (n==1?1972:0) << endl;
    cout << (n!=1?1972:0) << endl;
    cout << (n>=0?'+':'-') << endl;
    cout << (n%2==0?"even":"odd") << endl;




    return 0;
}
