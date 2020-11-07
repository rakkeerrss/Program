#include <iostream>
#include <set>

using namespace std;

void PrintSet(set<string> s) {
    for (string x : s) {
        cout << x << endl;
    }
}

int main() {
    set<string> animals = {"cat"s, "dog"s, "aardvark"s, "dog"s, "sheep"s, "ape"s, "sheep"s};
    PrintSet(animals);

    return 0;
} 