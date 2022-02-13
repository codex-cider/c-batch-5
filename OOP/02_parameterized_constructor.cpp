#include <iostream>
#include <string>
using namespace std;

class Student
{
public:
    Student(string name) // defining parameter in constructor called parameterized constructor
    {
        cout << "Name is: " << name << " " << endl;
    }
};

int main()
{
    Student st("Ravi");            // passing argument to the constructor
    Student st1("Devendra Yadav"); // passing argument to the constructor
}