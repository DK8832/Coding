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
    cout << "������ �������� �Է��ض� �װ�" << endl;
    cin >> r;
    pizza = pi * r * r;
    cout << "�������� " << r << "�� ������ ���̴� " << pizza <<  "�̴� �װ�" << endl;

    return 0;
}
