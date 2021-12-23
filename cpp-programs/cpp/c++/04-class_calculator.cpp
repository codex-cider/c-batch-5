#include<iostream>
using namespace std;
class Calculator
{
    public : 
    int sum()
    {
        int a, b;
        cout << "\nEnter here the value of a : ";
        cin >> a;
        cout << "\nEnter here the value of b : ";
        cin >> b;
        cout << "\nsum is called : " << a + b;
    }
    int sub()
    {
        int a, b;
        cout << "\n\nEnter here the value of a : ";
        cin >> a;
        cout << "\nEnter here the value of b : ";
        cin >> b;
        cout << "\nsub is called : " << a - b;
    }
    int mul()
    {
        int a, b;
        cout << "\nEnter here the value of a : ";
        cin >>a;
        cout << "\nEnter here the value of b : ";
        cin >> b;
        cout << "\nmul is called : " << a * b;
    }
    int div()
    {
        int a, b;
        cout << "\nEnter here the value of a : ";
        cin >>a;
        cout << "\nEnter here the value of b : ";
        cin >> b;
        cout << "\ndiv is called : " << a / b;
    }
};
int main()
{
    Calculator x;
    x.sum();
    x.sub();
    x.sub();
    x.sub();
}
