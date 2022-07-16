#include <iostream>
using namespace std;
int main()
{
    double a,b,c,d,e,s,aa;
    cout << "몸무게를 입력하세요" << endl;
    cin >> a;
    cout << "몸무게를 입력하세요" << endl;
    cin >> b;
    cout << "몸무게를 입력하세요" << endl;
    cin >> c;
    cout << "몸무게를 입력하세요" << endl;
    cin >> d;
    cout << "몸무게를 입력하세요" << endl;
    cin >> e;
    cout.precision(1);
    cout <<fixed;
    s = a+b+c+d+e;
    cout << "전체: " << s << endl;
    aa = (a+b+c+d+e)/5;
    cout << "평균: " << aa << endl;




    return 0;
}
