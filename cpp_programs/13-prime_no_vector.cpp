#include<iostream>
#include<vector>

using namespace std;
int main()
{
    vector<int>numbers;
    numbers.push_back(2);
    numbers.push_back(3);
    numbers.push_back(7);
    for(int i=0;i<numbers.size();i++)
    {
        cout<<numbers.at(i)<<endl;
    }
}