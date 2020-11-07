#include <iostream>
#include <string>

using namespace std;

int main(void)
{
    int i, w;
    i = w = 0;
    string query;
    getline(cin, query);
    if (query[0] == '\0')
        cout << 0 << endl;
    else
    {
        while (query[i] != '\0')
        {
            if (query[i] != ' ')
            {
                while (query[i] != ' ')
                {
                    if (query[i] != '\0')
                    {
                        w++;
                        i++;
                    }
                    else
                    {
                        break;
                    }
                
                }
                cout << w << endl;
                w = 0;
            }
            i++;
        }
        cout << (i - 1) << endl;
    }
}