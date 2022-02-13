#include<iostream>
#include"student.h"
#include<vector>
 vector<Student>students;
int main()
{
    Student s;
int con=0;

    do
    {
        cout<<"\n\n";
      cout<<"Enter 1 for Add students"<<endl;
      cout<<"Enter 2 for Print All students"<<endl;
      cout<<"Enter 3 for Search students"<<endl;
      cout<<"Enter 4 for Delete students"<<endl;
      cout<<"Enter 5 for Delete all students"<<endl;
      cin>>s.option;
      cin.ignore();
      if(s.option==1)
      {
          s.addStudent();
          students.push_back(s);
      }
      else if(s.option==2)
      {

          s.printAllStudents(students);
      }
      else if(s.option==3)
      {
          s.searchStudent();
      }
      else if(s.option==4)
      {
         s.deleteStudents(); 
      }
      else if(s.option==5)
      {
        students.clear();
      }
      else
      {
         continue;
      }


      cout<<"press 1 for continue";
      cin>>con;
    }
    while(con==1);
} 

