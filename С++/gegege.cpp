#include <iostream>
#include <string>

using namespace std;

int main(void)
{
    double a, b, x;
    cin >> a >> b;
    if (a == b)
    {
        cout << "The orange is divided into two equal parts" << endl;
    }
    else if (a > b)
    {
        x = a - b;
        string w = to_string(x);
        cout << "Cut off "s << w << " from the first part"s << endl;
    }
    else
    {
        x = b - a;
        string w = to_string(x);
        cout << "Cut off "s << w << " from the second part"s << endl;
    }
    return (0);
}