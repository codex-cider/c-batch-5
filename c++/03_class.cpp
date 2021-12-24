#include <iostream>
#include <stdio.h>
using namespace std;
class Mobile
{
public:
    string companyName;
};

int main()
{
    Mobile a;
    Mobile b;

    a.companyName = "Redmi";
    b.companyName = "samsung";
    cout << "\ncompany name of mobile:"
         << a.companyName;
    cout << "\ncompany name of mobile:"
         << b.companyName;
}