#include<stdio.h>
#include<string>
#include<iostream>
using namespace std;
class college
{
    string ownerName;

protected : 
    string collegeName;

public :
    college(string collegeName)
    {
        this->collegeName = collegeName;
    }
};

class student : public college
{
protected :
    string name, rollNumber;

public :
    student(string n, string rollN ,string collegeName) : college(collegeName)
    {
        name = n;
        rollNumber = rollN;
    }

    void printStudentinfo()
    {
        cout << "\n--------------------------------------------------------\n";
        cout << "college name " << this->collegeName <<endl;
        cout << "student name " << this->name<<endl;
        cout << "Roll name " << this->rollNumber <<endl;
    }
};

int main()
{
    string name, rollNumber, collegeName;

    cout << "Enter your name : ";
    getline(cin, name);

    cout << "Enter your Roll Number  : ";
    getline(cin, rollNumber);

    cout << "Enter your college name : ";
    getline(cin, collegeName);

    student st(name, rollNumber, collegeName);
    st.printStudentinfo(); 
}
