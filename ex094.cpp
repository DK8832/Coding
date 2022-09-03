#include <iostream>
using namespace std;
int main()

{
    int n;
    int a[100]={0,};
    int sum=0;
    cin >> n;
    for(int i=0; i<n; i++) {
        cin >> a[i];
    }
    for(int i=0; i<n; i++) {
        if(i%2==0)
            sum += a[i];

    }
    cout << sum << endl;






    return 0;
}
