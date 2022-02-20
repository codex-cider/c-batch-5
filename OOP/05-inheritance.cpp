#include <iostream>
#include <string>
using namespace std;

class Collage
{
    string ownerName;

protected:
    string collageName;

public:
    Collage(string collageName)
    {
        this->collageName = collageName;
    }
};

class Student : public Collage
{
protected:
    string name, rollNumber;

public:
    Student(string n, string rollN, string collageName) : Collage(collageName)
    {
        name = n;
        rollNumber = rollN;
    }
    void printStudentInfo()
    {
        cout << "\n--------------------------------------------\n";
        cout << "Collage Name  " << this->collageName << endl;
        cout << "Student Name  " << this->name << endl;
        cout << "Roll Number   " << this->rollNumber << endl;
    }
};

int main()
{

    string name, rollNumber, collageName;

    cout << "Enter Name ";
    getline(cin, name);

    cout << "Enter Roll Number ";
    getline(cin, rollNumber);

    cout << "Enter Collage Name ";
    getline(cin, collageName);

    Student st(name, rollNumber, collageName);

    st.printStudentInfo();
}