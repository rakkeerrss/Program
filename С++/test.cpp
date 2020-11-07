#include <iostream>
#include <string>

using namespace std;

int main(void)
{
    string query;
    getline(cin, query);
    for ( int i = 0; i < query.size(); i++)
    {
        if (query[i] == ' ')
        {
            cout << query << endl;
        }
    }
    cout << query.size() << endl;
}