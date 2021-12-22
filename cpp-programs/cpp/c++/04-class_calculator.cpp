#include<iostream>
using namespace std;
class Calculator
{
    public : 
    int sum()
    {
        cout << "sum is called : ";
    }
    int sub()
    {
        cout << "sub is called : ";
    }
    int mul()
    {
        cout << "mul is called : ";
    }
    int div()
    {
        cout << "div is called : ";
    }

};

int main()
{
    Calculator x;
    x.sum();
}

