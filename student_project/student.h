#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Student
{
public:
    int c, Roll_no, option;
    string Name, Email, mobile_no;
    void addStudents()
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
    void searchStudents()
    {
        cout << "search student name :";
        getline(cin, Name);
        //cin>>Name;
        cout << "search students Email :";
        getline(cin, Email);
        //cin>>Email;
        cout << "search students mobile no.:";
        getline(cin, mobile_no);
        //cin>>mobile_no;
        cout << "search students Roll no. :";
        cin >> Roll_no;
        cin.ignore();
    }
    void deleteStudents()
    {
        cout << "Delete Students name :";
        getline(cin, Name);
        // cin>>Name;
        cout << "Delete students Email :";
        getline(cin, Email);
        // cin>>Email;
        cout << "Delete students mobile no.:";
        getline(cin, mobile_no);
        //cin>>mobile_no;
        cout << "Delete students Roll no. :";
        cin >> Roll_no;
        cin.ignore();
    }
    void deleteAllStudents()
    {
        cout << "Delete all students Name:";
        getline(cin, Name);
        //cin>>Name;
        cout << "Delete all students Email :";
        getline(cin, Email);
        // cin>>Email;
        cout << "Delete all students mobile no.:";
        getline(cin, mobile_no);
        //cin>>mobile_no;
        cout << "Delete all students Roll no. :";
        cin >> Roll_no;
        cin.ignore();
    }
};
