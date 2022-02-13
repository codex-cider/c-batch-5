#include<iostream>
#include<string>
using namespace std;

class Student
{
public : 
    Student(string name) // defining parameter in constructor called parameterised constructor 
    {
        cout << "Name is : " << name << " " << endl;
    }
};

int main()
{
    Student st("Ravi");   // passing arguments to the constructor 
    Student st1("Devendra");    // passing arguments to the constructor 


