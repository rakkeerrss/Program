#include <iostream> // программа разбивает входящую строку на слова и выводит их с нововй строки
#include <string> 
#include <vector>

using namespace std;

vector<string> SplitIntoWords(string text) //отдельная функция которая принимает строку, и записывает слова со строки
{ // в вектор
    string word;
    vector<string> lol;
    for (int i = 0; i < text.size(); i++)
    {
        if (text[i] == ' ')
        {
            lol.push_back(word);
            word = ""s;
        }
        else
            word += text[i];
    }
    lol.push_back(word);
    return (lol);
}

int main()
{
	string query;
	getline(cin, query);
    vector<string> lol = SplitIntoWords(query);
		
	for (int kek = 0; kek < lol.size(); kek++)
    {
		cout << '[' << lol[kek] << ']' << endl;
	}
    return (0);
}