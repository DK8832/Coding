#include <iostream>
using namespace std;
int main()
{
    int koreanlanguage, english, mathematics, combinedscore, average;
    cout << "you need to know combined score[korean language, english and mathematics]" << endl;
    cin >> koreanlanguage >> english >> mathematics;
    combinedscore = koreanlanguage+english+mathematics;
    average = combinedscore/3;
    cout << "Korean language score is " << koreanlanguage << " score" << endl;
    cout << "English score is " << english << " score" << endl;
    cout << "Mathematics score is " << mathematics << " score" << endl;
    cout << "Combined score is " << combinedscore << " score" << endl;
    cout << "Average score is" << average << " score" << endl;








    return 0;
}
