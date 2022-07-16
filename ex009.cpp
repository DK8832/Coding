#include <iostream>
using namespace std;
int main()
{
    const int K_MAX = 1000;
    const int K_MIN = 1;
    int n;
    cout << "Enter a number" << endl;
    cin >> n;
    if(n>=K_MIN && n<=K_MAX)
    cout << "당신은 인간입니다" << endl;
    cin >> n;


    return 0;
}
