#include <iostream>
using namespace std;
int main()
{
    int i=0,sum=0;
    while(1) {
        if(i==10) break;
        sum +=i;
        cout << "i=" << i << '\n';
        cout << "sum=" << sum << '\n';
        i++;
    }

    return 0;
}
