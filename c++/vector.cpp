#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main()
{
    vector<string> names;
    names.push_back("Devendra Yadav");
    names.push_back("Ravi Verma");

    names.push_back("Rahul Verma ");

    for (int i = 0; i < names.size(); i++)
    {
        cout << names.at(i) << endl; //a[i]--> names.at(i)
    }

    //array
    string n[3];
    n[0] = "Devendra Yadav";
    n[1] = "Ravi Verma";
    n[2] = "Rahul Verma";
}