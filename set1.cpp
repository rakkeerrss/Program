#include <iostream>
#include <vector>
#include <string>
#include <set>
 
using namespace std;
 
set<string> MakeSet(vector<string> query_words) // функция записывает слова из вектора в сет
{
    set<string> s;
    for (string word : query_words)
        s.insert(word);
    return s;
}
 
vector<string> SplitIntoWords(string text) // функция записывает в вектор слова из строки
{
    vector<string> words;
    string word;
    for (int i = 0; i < text.size(); ++i)
    {
        if (text[i] == ' ')
        {
            words.push_back(word);
            word = "";
        }
        else
            word += text[i];
    }
    words.push_back(word);
 
    return words;
}
 
int CalculateSimilarity(vector<string> first, vector<string> second) //функция сравниает слова запроса и описание на совпадение и возвращает кол.совпадений
{
    set<string> first_set = MakeSet(first);
    set<string> second_set = MakeSet(second);
    set<string> intersection;
    for (string word : first_set)
    {
        if (second_set.count(word) > 0)
            intersection.insert(word);
    }
    return intersection.size();
}
 
int main() //программа считает реверантность запроса - размер множества слов, которые входят в запрос и описание
{
    string query, description;
 
    getline(cin, query);
    getline(cin, description);
 
    cout << CalculateSimilarity(SplitIntoWords(query), SplitIntoWords(description)) << endl;
 
    return 0;
}