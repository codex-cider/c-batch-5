#include<iostream>
#include<string>
using namespace std;
class School
{
    public:
    string schoolName;
    int students,teachers,buses;     
};
int main()
{
    School x;
    x.schoolName;
    x.students;
    x.teachers;
    x.buses;
    cout<<"School Name :";
    cin>>x.schoolName;
    cout<<"Students :";
    cin>>x.students;
    cout<<"Teachers :";
    cin>>x.teachers;
    cout<<"Buses :";
    cin>>x.buses;
    cout<<"\nSchool Name :-"<<x.schoolName;
    cout<<"\nhow many students in school :-"<<x.students;
    cout<<"\nhow many teachers in school :-"<<x.teachers;
    cout<<"\nhow many buses in school :-"<<x.buses;
}
