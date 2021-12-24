#include <iostream>
#include <stdio.h>
using namespace std;
class Mobile
{
public:
    string companyName; // class kai andar ek sai jyada variable create kr saktai hai
};

int main()
{
    Mobile a; // object is a blue print of class.
    Mobile b; // class type kai variable ko object kehetai ghai

    a.companyName = "Redmi";
    b.companyName = "samsung";
    cout << "\ncompany name of mobile:"
         << a.companyName;
    cout << "\ncompany name of mobile:"
         << b.companyName;
}