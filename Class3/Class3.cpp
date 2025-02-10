/* Подсчет кол-ва слов в строке */
#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int countWords(string str);

int main()
{
    setlocale(LC_ALL, "RU");
    
    string str;

    cout << "Введите строку: " << endl;
    getline(cin, str);

    int res = countWords(str);

    cout << "Результа: " << res << endl;

    return 0;

}

int countWords(string str) {

    int count = 0;
    bool inWord = false;

    for (char c : str) {
        if (isspace(c)) {
            inWord = false;
        }
        else if (!inWord) {
            count++;
            inWord = true;
        }
    }

    return count;
}