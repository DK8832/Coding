#include <iostream>
using namespace std;
int main()
{
    int n,cnt=0;
    cin >> n;
    while(n>1) {
        if(n%2==0)
            n/=2;
        else
            n=(n*3+1)/2;
        cnt++;




    }


    return 0;
}
