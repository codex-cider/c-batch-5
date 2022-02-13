#include <iostream>
#include <string>
using namespace std;

class Student
{
public:
    // yesa constructor jisme koi paramer naa hao use default constructor kahte hai

    Student() // Default constructor
    {
        cout << "Default Constructor called" << endl;
    }

    Student(string name) // Parameterized constructor
    {
        cout << "Name is: " << name << " " << endl;
    }
};

int main()
{
    Student st1;               // yaha pr default constructor called hoga
    Student st2("Ravi Verma"); // yaha pe parameterized constructor called hoga

    /*
    Student st3(20); // ye error dega kyu ki interger type ka koi bhi parameterized constructor nahi hai
    */
}