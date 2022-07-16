#include <iostream>
using namespace std;
int main()
{
    int apple, banana;
    apple = 3;
    banana = apple;
    cout << apple << endl;
    cout << banana << endl;
    const double pi = 3.14;
    apple = pi;
    cout << apple << endl;
    ///pi = 3.141592;
    int r = 10;
    double pizza;
    cout << "피자의 반지름을 입력해라 닝겐" << endl;
    cin >> r;
    pizza = pi * r * r;
    cout << "반지름이 " << r << "인 피자의 넓이는 " << pizza <<  "이다 닝겐" << endl;

    return 0;
}
