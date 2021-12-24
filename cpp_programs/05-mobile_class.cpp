#include<iostream>
#include<string>
using namespace std;
class Mobile
{
    public:
    string name;
};
int main()
{
    Mobile a;
    Mobile b;
    a.name="realme";
    b.name="redmi";
    cout<<"\nname of mobile :"<<a.name;
    cout<<"\nname of mobile :"<<b.name;
}