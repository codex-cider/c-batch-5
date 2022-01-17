#include<iostream>
#include<vector>
#include<string>
using namespace std;
int main()
{
    vector<string>names;
    names.push_back("ravi verma");
    names.push_back("Aditya verma");
  for(int i=0;i<names.size();i++)
  {
      cout<<names.at(i)<<endl;//a[i]-->names.at(i)
  }
}