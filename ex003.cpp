/**************************************************************
    program: ex003.cpp
    author: ???
    date: 2022.03.19
***************************************************************/
/// c++ standard library
/// header file
#include <iostream>
#include <windows.h>

using namespace std;

int main()
{
    std::cout << "apple + pie" << std::endl;
    cout << "= apple pie" << endl;

    cout << 'X' << endl;

    cout << 3.141592 << endl;
    cout << -3.141592 << endl;

    cout << '3.141592'+3.141592 << endl; //문자
    cout << 3.141592+3.141592 << endl;   //숫자

    cout << '3.141592는 원주율이다' << endl;
    cout << "3.141592는 원주율이다" << endl;

    /// one line comment
/*
   multiline comment
    여러줄을 코멘트로 처리한다.
*/

    cout << "I am 14 years old." << endl;
    cout << "I am " << 14 << " years old." << endl;

    cout << "1+2=3" << endl;
    cout << 1 << "+" << 2 << "=" << 3 << endl;
    cout << 2 << "-" << 1 << "=" << 1 << endl;
    cout << 2 << "*" << 5 << "=" << 10 << endl;
    cout << 6 << "/" << 3 << "=" << 2 << endl;

    cout << '\n'; // new line
    cout << '\n'; // new line
    cout << '\a';
    cout << '\a';
    Sleep(1000);
    cout << '\a';

    cout << '\\';
    cout << '\"';
    cout << "               aa" << '\t' << "bbb" << '\n' ;
    cout << "                aaaa" << '\t' << "bbb" << '\n' ;
    cout << "               aaaaaa" << '\t' << "bbb" << '\n' ;
    cout << "              aaaaaaaa" << '\t' << "bbb" << '\n' ;
    cout << "             aaaaaaaaaa" << '\t' << "bbb" << '\n' ;
    cout << "            aaaaaaaaaaaa" << '\t' << "bbb" << '\n' ;
    cout << "           aaaaaaaaaaaaaa" << '\t' << "bbb" << '\n' ;
    cout << "          aaaaaaaaaaaaaaaa" << '\t' << "bbb" << '\n' ;
    cout << "         aaaaaaaaaaaaaaaaaa" << '\t' << "bbb" << '\n' ;
    cout << "        aaaaaaaaaaaaaaaaaaaaa" << '\t' << "bbb" << '\n' ;
    cout << "       aaaaaaaaaaaaaaaaaaaaaaa" << '\t' << "bbb" << '\n' ;
    cout << "      aaaaaaaaaaaaaaaaaaaaaaaaa" << '\t' << "bbb" << '\n' ;
    cout << "     aaaaaaaaaaaaaaaaaaaaaaaaaaa" << '\t' << "bbb" << '\n' ;
    cout << "    aaaaaaaaaaaaaaaaaaaaaaaaaaaaa" << '\t' << "bbb" << '\n' ;
    cout << "   aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa" << '\t' << "bbb" << '\n' ;
    cout << "  aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa" << '\t' << "bbb" << '\n' ;
    cout << " aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa" << '\t' << "bbb" << '\n' ;
    cout << "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa" << '\t' << "bbb" << '\n' ;
    cout << "1234567890" << endl;















    return 0;
}
