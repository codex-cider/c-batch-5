#include <iostream>
using namespace std;

class Student
{
public:
    // Constructor is a special type of function whose name is same as class name
    // & Constructor don't have return type but it return class (Object) it self

    // Constructor
    Student()
    {
        cout << "\n\n";
        cout << "Called Constructor" << endl;
    }
};

int main()
{
    Student st; // jab bhi apan class ka object banate hai tao us class ka constructor called hota hai

    Student st2, st3;
}
