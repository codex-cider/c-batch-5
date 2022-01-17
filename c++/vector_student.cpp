

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

    Student S1;
    S1.Name = "Prachi";
    Student.push_back(S1);
    S1.RollNumber = "22";
    Student.push_back(S1);
    S1.Email = "prachigothwal52@gmail.com";
    Student.push_back(S1);
    S1.Mobile = "9617001332";
    Student.push_back(S1);
}