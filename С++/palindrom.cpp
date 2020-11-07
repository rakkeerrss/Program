#include <iostream>
#include <string>
#include <vector>

using namespace std;
//определяет, явялется ли строка s палиндромом 
bool IsPalindrom(string s)
{// переберём все символы s[i] из первой половины строки
    for (size_t i = 0; i < s.size() / 2; i++)
    {
        // s[s.size() - i - 1] - символ, симметричный символу s[i]
        if (s[i] != s[s.size() - i - 1])
            return (false); // если они не совпадают, строка точно не палидром
    }// если все пары символов совпадают, строка - палидром
    return (true);
}

vector<string> PalindromFilter(vector<string> words, int min_length)
{
    vector<string> result;
// перебираем все элементы вектора words
    for (string s : words)
    {
         // если требуеммые условия выполняются, добавляем s к ответу    
        if (s.size() >= min_length && IsPalindrom(s))
            result.push_back(s);
    }
    return result;
}

int main()
{
    return (0);
}