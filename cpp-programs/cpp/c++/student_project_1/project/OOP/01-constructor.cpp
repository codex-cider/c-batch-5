#include<iostream>
using namespace std;
class Student
{
    public : 
    // constructor is a special type of function whose name is same as class name 
    // & constructor don't have return type but it return class (object) it self

    // constructor
    Student()
    {
        cout << "\n\n";
        cout << "Called constructor";
    }
};

int main()
{
    Student st;

    Student st2, st3; // jab bi apn class ka obj banate h to class ko constructor bi call hota h 
}
