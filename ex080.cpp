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

    i=0;
    sum=0;
    while(1){
        i++;
        if(i==10) break;
        if(i%2==0) continue;
        sum += i;
        cout << i << ' ' << sum << '\n';
    }

    return 0;
}
