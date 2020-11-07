#include <iostream>
#include <string>
#include <vector>
 
using namespace std;
 
int main()
{
    string query;
    getline(cin, query);
 
    string word;
    vector<string> lol;
    for (int i = 0; i < query.size(); ++i)
    {
        if (query[i] == ' ')
        {
            
            lol.push_back(word);
            word = ""s;
        }
        else
        {
            word += query[i];
        }
    }
    lol.push_back(word);
    for (int kek = 0; kek < lol.size(); kek++)
    {
        cout << '[' << lol[kek] << ']' << endl;
    }
}