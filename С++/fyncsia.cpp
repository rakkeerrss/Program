#include <iostream> // программа проверяет будет ли строка палидромом
#include <string>

using namespace std;

void IsPalindrome(string s)
{
    string s1;
    for (int i = s.size() - 1; i >= 0; i--)
        s1 += s[i];
    bool tr (s1 == s);
        cout << boolalpha
            << tr << endl;
}

int main() {
    IsPalindrome("ara"s);
    IsPalindrome("deer"s);
    return 0;
}