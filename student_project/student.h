#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Student
{
public:
    int c, Roll_no, option;
    string Name, Email, mobile_no;
    void addStudent()
    {
        cout << "Add students name:";
        getline(cin, Name);
        //cin>>Name;
        cout << "Add students Email :";
        getline(cin, Email);
        // cin>>Email;
        cout << "Add students mobile no.:";
        getline(cin, mobile_no);
        // cin>>mobile_no;
        cout << "Add students Roll no. :";
        cin >> Roll_no;
        cin.ignore();
    }
    void printAllStudents(vector<Student> students)
    {
        for (int i = 0; i < students.size(); i++)
        {
            Student st = students.at(i);
            cout << "\n/*******************************************************/" << endl;
            cout << "Students name        : " << st.Name << endl;
            cout << "Students email       : " << st.Email << endl;
            cout << "Students roll no     : " << st.Roll_no << endl;
            cout << "Students contact no  : " << st.mobile_no << endl;
        }
    }

    bool findStudentByName(vector<Student> students, string name)
    {
        bool findStudent = false;
        for (int i = 0; i < students.size(); i++)
        {
            Student st = students.at(i);
            int result = st.Name.compare(name);
            if (result == 0)
            {
                findStudent = true;
            }
        }
        return findStudent;
    }

    void searchStudent(vector<Student> students)
    {
        string n;
        cout << "Enter student name :";
        getline(cin, n);
        bool findStudent = findStudentByName(students, n);
        cout << "\n\n";
        if (findStudent)
        {
            cout << "Studnet find with name -- " << n << endl;
        }
        else
        {
            cout << "Student not found" << endl;
        }
    }
    vector<Student> deleteStudent(vector<Student> students)
    {
        string n;
        cout << "Enter student name :";
        getline(cin, n);

        vector<Student> s;

        for (int i = 0; i < students.size(); i++)
        {
            Student st = students.at(i);
            int find = st.Name.compare(n);
            if (find != 0)
            {
                s.push_back(st);
            }
        }
        return s;
    }
};
