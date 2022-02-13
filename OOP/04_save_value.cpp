#include <iostream>
#include <string>
using namespace std;

class Student
{
    string name, mobile, email;

public:
    Student(string n, string m, string e)
    {
        name = n;
        mobile = m;
        email = e;
    }

    void printStudent()
    {
        cout << "Name:   " << name << endl;
        cout << "Mobile: " << mobile << endl;
        cout << "Email:  " << email << endl;
    }
};

int main()
{
    Student st("Ravi Verma", "1234567890", "test@gmail.com");
    st.printStudent();

    Student st1("Devendra Verma", "8523697412", "devendra@gmail.com");
    st1.printStudent();
}
