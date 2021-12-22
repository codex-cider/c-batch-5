#include <iostream>
using namespace std;
class Calculator
{
    public :
    int sum()
    {
        int a,b;
        cout<<"enter the value of a :";
        cin>>a;
        cout<<"enter the value of b :";
        cin>>b;
        cout << "sum is called :"<<a+b;
    }
    int sub()
    {
        int a,b;
        cout<<"enter the value of a :";
        cin>>a;
        cout<<"enter the value of b :";
        cin>>b;
        cout << "sub is called :"<<a-b;
    }
    int mul()
    {
        int a,b;
        cout<<"enter the value of a :";
        cin>>a;
        cout<<"enter the value of b :";
        cin>>b;
        cout << "mul is called :"<<a*b;
    }
    int div()
    {
        int a,b;
        cout<<"enter the value of a :";
        cin>>a;
        cout<<"enter the value of b :";
        cout << "div is called :"<<a/b;
    }
};
int main()
{
    Calculator x;
    x.sum();
    x.sub();
    x.mul();
    x.div();
}