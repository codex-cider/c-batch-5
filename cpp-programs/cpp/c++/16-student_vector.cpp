#include<iostream>
#include<string>
#include<vector>
using namespace std;
class Student
{
   public:
   string Name,Email;
   int Rollnumber,Mobile;

};
int main()
{
   vector<Student>students;  // students variable h
   Student s1; 
   s1.Name="ravi yadav";
   s1.Email="kjshh@gmail.com";
   s1.Rollnumber=123;
   s1.Mobile=123456;

   students.push_back(s1);  // s1 object h 
   cout<<s1.Name<<endl;
   cout<<s1.Email<<endl;
   cout<<s1.Rollnumber<<endl;
   cout<<s1.Mobile<<endl;
}
