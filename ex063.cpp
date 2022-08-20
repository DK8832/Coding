#include <iostream>
using namespace std;
int main()
{
    for(int i=0; i<10; i++) {
        cout << i << endl;
    }

    for(int i=5; i<=8; i++) {
        cout << i << ' ';
    }

    for(int i=5; i>0; i--) {
        cout << i << endl;
    }

    int n;
    cin >> n;
    for(int i=1; i<=n; i++) {
        cout << n << endl;
    }

    cout.precision(1);
    for(int i=1; i<=100; i++) {
        cout << i << "/" << 2 << " is " << fixeds << (double)i/2 << endl;

    }
    return 0;
}
