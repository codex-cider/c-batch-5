#include<iostream>
#include<string>
using namespace std;
class Student
{
   string name,mobile,email;
   public:
   Student(string n,string m,string e);
   {
       name=n;
       mobile=m;
       email=e;
   }
   void printStudent()
   {
       cout<<"Name :"<<name<<endl;
       cout<<"Mobile :"<<mobile<<endl;
       cout<<"Email :"<<email<<endl;
   }
};
  int main()
  {
      Student st("Ravi verma","2345678","test@gmail.com");
      Student st2("devendra yadav","0987654","devendra yadav");
  }