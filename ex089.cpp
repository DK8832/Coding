#include <iostream>
using namespace std;
int main()
{
    int a,b,c,lcm=1;
    cin >> a >> b >> c;
    while(lcm%a!=0 || lcm%b!=0 || lcm%c!=0){
        lcm++;

    }
    cout << lcm << '\n';

    return 0;
}
