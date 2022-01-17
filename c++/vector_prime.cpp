#include <iostream>
#include <vector>

using namespace std;
int main()
{
    vector<int> number;
    number.push_back(2);
    number.push_back(3);

    number.push_back(5);

    for (int i = 0; i < number.size(); i++)
    {
        cout << number.at(i) << endl;
    }

    //array
    string n[3];
    n[0] = 2;
    n[1] = 3;
    n[2] = 5;
}