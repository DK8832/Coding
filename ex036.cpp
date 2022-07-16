#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    if(n>0)
        cout << n << ">0" << endl;
    else
        cout << n << "<=0" <<endl;
    if(n>0)
        cout << "cout << 'plus' << endl;" << endl;
    else if(n<0)
        cout << "cout << 'minus' << endl;" << endl;
    else
        cout << "cout << 'ZERO' << endl;" << endl;



    return 0;
}
