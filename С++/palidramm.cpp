#include <iostream>
#include <string>
#include <vector>

using namespace std;
// определяет, является ли строка s палиндромом
bool IsPalindrom(string s)
{
    string word;
    for (int i = s.size() - 1; i >= 0; i--)
        word += s[i];
    bool tr (word == s);
        return (tr);
}

vector<string> PalindromFilter(vector<string> words, int min_length)
{
    vector<string> gan;
    for (int i = 0; i <= words.size() - 1; i ++)// формируем и возвращаем вектор подходящих палиндромов
    {
        if (words[i].size() >= min_length)
             gan.push_back(words[i]);
    }
    return (gan);
}

int main()
{
    string chek;
    string word;
    int min_length;
    vector<string> lol;
    vector<string> mini;
    getline(cin, chek);
    cin >> min_length;
    for (int i = 0; i < chek.size(); i++)
    {
        if (chek[i] == ',')
        {
            if (IsPalindrom(word))
            {
                lol.push_back(word);
                word = ""s;
            }
            else
                word = ""s;
        }
        else if (chek[i] != ' ')
            word += chek[i];
    }
    if (IsPalindrom(word))
        lol.push_back(word);
    if (lol.size() > 0)
        mini = PalindromFilter(lol, min_length);
    if (mini.size() > 0)
    {
        cout << mini[0];
        for (int j = 1; j < mini.size(); j++)
            cout << ", "s << mini[j];
        cout << endl;
    }
    return 0;
}