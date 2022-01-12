#include<iostream>
#include<string>
using namespace std;
class Computer
{
    public:
    string name;
    int model,ram;
    char inches,genration;
};
int main()
{
    Computer a;
    a.model;
    a.ram;
    a.inches;
    a.name;
    a.genration;
    cout<<"\nModel:";
    cin>>a.model;
    cout<<"\nRam :";
    cin>>a.ram;
    cout<<"\nInches :";
    cin>>a.inches;
    cout<<"\nName :";
    cin>>a.name;
    cout<<"\nGenration :";
    cin>>a.genration;
    cout<<"\nModel :"<<a.model;
    cout<<"\nRam :"<<a.ram;
    cout<<"\nInches :"<<a.inches;
    cout<<"\nName :"<<a.name;
    cout<<"\nGenration :"<<a.genration;
}