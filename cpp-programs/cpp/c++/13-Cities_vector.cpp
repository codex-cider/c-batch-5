#include<iostream>
#include<vector>
#include<string>
using namespace std;

int main()
{
    vector<string>cities;
    cities.push_back("Indore");
    cities.push_back("Delhi");
    cities.push_back("Mumbai");

    for(int i=0;i<cities.size();i++)
    {
      cout<<cities.at(i)<<endl;
    }
}
