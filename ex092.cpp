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
        a[i]=i;
        cout << a[i] << ' ';

    }
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;

    int b[1000] = {0,};
    for(int i=0; i<1000; i++) {
        b[i]=i+1;
        cout << b[i] << ' ';
    }

    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;

    int c[1000] = {0,};
    for(int i=0; i<1000; i++) {
        c[i]=i*2+1;
        cout << c[i] << ' ';
    }
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;

    int d[100] = {0,};
    for(int i=0; i<100; i++) {
        d[i]=i*2;
        cout << d[i] << ' ';

    }

    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;

    int e[100]={0,};
    for(int i=0; i<100; i++) {
        e[i]=i*3+3;
        cout << e[i] << ' ';

    }

    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;

    int f[100000];
    for(int i=0; i<100000; i++) {
        cout << f[i] << ' ';
    }



    return 0;
}
