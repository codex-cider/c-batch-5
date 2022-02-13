#include<iostream>
#include<vector>
#include<string>
using namespace std;
int main()
{
    vector<string> names;   // syntax = vector + data type + variable // vector use kerne se pahle uski header file de.

    names.push_back("Devendra yadav");
    names.push_back("Ravi verma");
    names.push_back("Rahul yadav");

    
    for (int i = 0; i < names.size(); i++)
    {
       cout << names.at(i) <<endl; // a[i] ----> names.at(i) 
    }
}

