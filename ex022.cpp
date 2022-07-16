#include <iostream>
using namespace std;
int main()
{
    int i = 0;
    int j = 0;
    i++;
    ++i;
    i = i+1;
    i += 1;
    i++;
    cout << i << endl;

    j = j+2;
    j += 2;
    j += 2;
    j += 2;
    cout << j << endl;

    int sum = 0;

    sum = i*j;
    cout << sum << endl;
    sum /= i;
    cout << sum << endl;
    sum %= j;
    cout << sum << endl;











    return 0;
}
