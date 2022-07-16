#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    cout << n << endl;
    switch(n%2) {
    case 0:
        cout << "even" << endl;
        break;
        case 1:
        cout << "odd" << endl;
        break;
        default:
            cout << "odd" << endl;
    }

    return 0;
}
