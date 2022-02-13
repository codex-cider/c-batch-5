#include<iostream>
#include<string>
#include<vector>
using namespace std;
class Student
{
    public:
    int c, Roll_no, option;
    string Name,Email,mobile_no;
      void addStudents()
      {
          cout<<"Add students name:";
          getline(cin,Name);
          //cin>>Name;
          cout<<"Add students Email :";
          getline(cin,Email);
         // cin>>Email;
          cout<<"Add students mobile no.:";
          getline(cin,mobile_no);
         // cin>>mobile_no;
          cout<<"Add students Roll no. :";
          cin>>Roll_no;
           cin.ignore();
      }
      void printAllStudents()
      {
          cout<<"Print all students name :";
          getline(cin,Name);
          //cin>>Name;
          cout<<"Print all students Email :";
          getline(cin,Email);
          //cin>>Email;
          cout<<"Print all students mobile no.:";
          getline(cin,mobile_no);
          //cin>>mobile_no;
          cout<<"Print all students Roll no. :";
          cin>>Roll_no;
           cin.ignore();
      }
      void searchStudents()
      {
          cout<<"search student name :";
          getline(cin,Name);
          //cin>>Name;
          cout<<"search students Email :";
          getline(cin,Email);
          //cin>>Email;
          cout<<"search students mobile no.:";
          getline(cin,mobile_no);
          //cin>>mobile_no;
          cout<<"search students Roll no. :";
          cin>>Roll_no;
           cin.ignore();
      }
       void deleteStudents()
      {
          cout<<"Delete Students name :";
          getline(cin,Name);
         // cin>>Name;
          cout<<"Delete students Email :";
          getline(cin,Email);
         // cin>>Email;
          cout<<"Delete students mobile no.:";
          getline(cin,mobile_no);
          //cin>>mobile_no;
          cout<<"Delete students Roll no. :";
          cin>>Roll_no;
           cin.ignore();
      }
       void deleteAllStudents()
      {
          cout<<"Delete all students Name:";
          getline(cin,Name);
          //cin>>Name;
          cout<<"Delete all students Email :";
          getline(cin,Email);
         // cin>>Email;
          cout<<"Delete all students mobile no.:";
          getline(cin,mobile_no);
          //cin>>mobile_no;
          cout<<"Delete all students Roll no. :";
          cin>>Roll_no;
          cin.ignore();
      }
};
int main()
{
    Student s;
    do
    {
      cout<<"Enter 1 for Add students"<<endl;
      cout<<"Enter 2 for Print All students"<<endl;
      cout<<"Enter 3 for Search students"<<endl;
      cout<<"Enter 4 for Delete students"<<endl;
      cout<<"Enter 5 for Delete all students"<<endl;
      cin>>s.option;
      cin.ignore();
      if(s.option==1)
      {
          s.addStudents();
      }
      else if(s.option==2)
      {
          s.printAllStudents();
      }
      else if(s.option==3)
      {
          s.searchStudents();
      }
      else if(s.option==4)
      {
         s.deleteStudents(); 
      }
      else if(s.option==5)
      {
         s.deleteAllStudents();
      }
      else
      {
         continue;
      }
    }
    while(s.option==6);
}