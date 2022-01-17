#include <iostream>
#include <vector>

using namespace std;
int main()
{
    vector<char> character;
    character.push_back('a');
    character.push_back('e');

    character.push_back('i');

    for (int i = 0; i < character.size(); i++)
    {
        cout << character.at(i) << endl;
    }

    //array
    string n[3];
    n[0] = "a";
    n[1] = "e";
    n[2] = "i";
}