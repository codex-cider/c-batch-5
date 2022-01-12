#include<iostream>
#include<string>
using namespace std;
class University
{
    public:
    string universityName;
    int students,buses,faculty,classrooms;
};
int main()
{
    University a;
    a.universityName;
    a.students;
    a.buses;
    a.faculty;
    a.classrooms;
    cout<<"University name :";
    cin>>a.universityName;
    cout<<"how many students in university :";
    cin>>a.students;
    cout<<"how many buses in university :";
    cin>>a.buses;
    cout<<"how many Faculty in university :";
    cin>> a.faculty;
    cout<<"how many classrooms in university :";
    cin>>a.classrooms;
    cout<<"\nUniversity name :"<<a.universityName;
    cout<<"\nStudents :"<<a.students;
    cout<<"\nBuses :"<<a.buses;
    cout<<"\nfaculty :"<<a.faculty;
    cout<<"\nClassrooms :"<<a.classrooms;
}