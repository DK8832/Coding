#include <iostream>
using namespace std;
int main()
{
    int num1=0;
    int num2=0;
    int num3=0;

    cout << num1 << endl;
    cout << num2 << endl;
    cout << num3 << endl;
    cout << &num1 << endl;
    cout << &num2 << endl;
    cout << &num3 << endl;

    int num[3] ={0,};
    cout << num[0] << endl;
    cout << num[1] << endl;
    cout << num[2] << endl;
    num[0]=10;
    num[1]=20;
    num[2]=30;
    cout << num[0] << endl;
    cout << num[1] << endl;
    cout << num[2] << endl;
    for(int i=0; i<3; i++) {
        cout << num[i] << endl;

    }
    int a[100]={0,};
    for(int i=0; i<100; i++) {
        cout << a[1] << ' ';

    }





    return 0;
}
