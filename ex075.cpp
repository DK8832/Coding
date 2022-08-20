#include <iostream>
using namespace std;
int main()
{
    int n=1;
    int sum=0;
    while(n) {
        cout << "if you want end this? type 0.\n\n";
            cin >> n;
                sum += n;
                    cout << sum << '\n';
    }

    return 0;
}
