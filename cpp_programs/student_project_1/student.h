#include<iostream>
#include<string>
#include<vector>
using namespace std;
class Student
{
    public:
    int c,Roll_no,option;
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
      void printAllStudents(vector<Student>students)
      {
          for(int i=0;i<students.size();i++)
          {
              Student st = students.at(i);
              cout<<"\n******************************************/"<<endl;
              cout<<"Students Name :"<<st.Name<<endl;
              cout<<"Student email :"<<st.Email<<endl;
              cout<<"Student roll no."<<st.Roll_no<<endl;
              cout<<"Student contact no."<<st.mobile_no<<endl;
          }
          
      }
      void searchStudents()
      {
        
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
          
      }
};
