#include <iostream>
#include <set>

using namespace std;

void CheckBirdPresence(set<string> birds, string bird_name)
{
    if (birds.count(bird_name))
    {
        cout << "The "s << bird_name << " is still here."s << endl;
    }
    else
    {
        cout << "The "s <<  bird_name << " has flown away!"s << endl;
    }
}

int main()
{
    set<string> birds = {"swallow"s, "eagle"s, "owl"s, "swallow"s, "starling"s};

    cout << birds.count("swallow"s) << endl;
    CheckBirdPresence(birds, "swallow"s);
    cout << birds.count("eagle"s) << endl;
    birds.erase("swallow"s);
    CheckBirdPresence(birds, "swallow"s);

    return 0;
}