

#include <iostream>
#include <stdio.h>
#include <string>
#include <vector>
using namespace std;
class Student
{
public:
    string Name, RollNumber, Email, Mobile;
};
int main()
{
    vector<Student> Student;

    Student s1;
    s1.Name = "Prachi";
    s1.Mobile = "9617001332";
    s1.RollNumber = "22";
    s1.Email = "prachigothwal52@gmail.com";
    Student.push_back(s1);
}