#include <iostream>
using namespace std;
int main()
{
    int sum=0;
    int a;
    cin >> a;
    for(int i=1; i<=a; i++) {
        if(i%2==0)
            sum+=i;
    }
    cout << sum << endl;

    return 0;
}
