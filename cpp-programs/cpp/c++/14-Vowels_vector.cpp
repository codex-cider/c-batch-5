#include<iostream>
#include<vector>

using namespace std;
int main()
{
    vector<char>vowels;
    vowels.push_back('a');
    vowels.push_back('e');
    vowels.push_back('i');
    vowels.push_back('o');
    vowels.push_back('u');

    for( int i = 0; i < vowels.size(); i++)
    {
        cout << vowels.at(i) << endl;
    }

}
