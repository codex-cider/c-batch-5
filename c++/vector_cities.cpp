#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main()
{
    vector<string> cities;
    cities.push_back("Indore");
    cities.push_back("Ujjain");

    cities.push_back("Bhopal ");

    for (int i = 0; i < cities.size(); i++)
    {
        cout << cities.at(i) << endl; //a[i]--> names.at(i)
    }

    //array
    string n[3];
    n[0] = "Indore";
    n[1] = "Ujjain";
    n[2] = "Bhopal";
}