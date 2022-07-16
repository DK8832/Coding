#include <iostream>

using namespace std;

int main()
{
    cout << "apple pie" << endl; /// string
    cout << 'a' << endl;         /// character
    cout << 3.141592 << endl;    /// real number
    cout << 3141592 << endl;     /// integer

    cout << '\n';
    cout << '\'';
    cout << '\"';
    cout << '\n';

    cout << '\'';
    cout << "mission clear";
    cout << '\''<< endl;

    cout << '\'';
    cout << "mission clear";
    cout << '\'' << endl;

    cout << '\'';
    cout << "mission clear";
    cout << '\'' << endl;

    cout << '\'';
    cout << "mission clear";
    cout << '\''<< endl;

    cout << '\"';
    cout << "\"C:\\Program Files\\CodeBlocks\"" << endl;
    cout << "\"mission clear!\"" << endl;
    cout << "\"C:\\c++\\source\"" << endl;
    cout << "\"!@#$%^&*()\"" << endl;

    cout << "1234567890" << endl;

    cout.width(10);
    cout << 1 << endl;

    cout.width(10);
    cout << 123 << endl;



    cout.width(10);
    cout.fill('$');
    cout << 100 << endl;

    cout.width(20);
    cout.fill('&');
    cout << 100 << endl;

    cout << 3.141592 << endl;

    cout.precision(6);
    cout << fixed << 3.141592 << endl;

    cout.precision(15);
    cout << fixed << 3.141592653589793<< endl;

    cout.width(5);
    cout.fill('0');
    cout << 9 << endl;

    cout.width(7);
    cout.fill('0');
    cout << 123 << endl;

    cout.width(4);
    cout.fill('=');
    cout << ">" << endl;

    cout.width(3);
    cout.fill('^');
    cout << ";" << endl;

    cout.width(12);
    cout.fill('$');
    cout << 1000 << endl;

    cout << "^";
    cout.width(12);
    cout.fill('-');
    cout << "^" << endl;

    cout.width(10);
    cout.fill(' ');
    cout << "a" << endl;
    cout.width(11);
    cout << "aaa" << endl;
    cout.width(12);
    cout << "aaaaa" << endl;
    cout.width(13);
    cout << "aaaaaaa" << endl;
    cout.width(14);
    cout << "aaaaaaaaa" << endl;
    cout.width(15);
    cout << "aaaaaaaaaaa" << endl;
    cout.width(16);
    cout << "aaaaaaaaaaaaa" << endl;
    cout.width(17);
    cout << "aaaaaaaaaaaaaaa" << endl;
    cout.width(18);
    cout << "aaaaaaaaaaaaaaaaa" << endl;
    cout << "         H" << endl;






    return 0;

}
