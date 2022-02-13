#include<iostream>
#include<string>
#include<vector>
using namespace std;
class Student
{
   public:
   string Name,Email,Mobile;
   int Rollnumber;
};
int main()
{
     vector<Student>students;
   for(int i=0;i<5;i++)
   {
       Student s;
       cout<<"Enter students name :";
       getline(cin,s.Name);  // getline ko space ke baad ki values ko print kirane ke liye use krte h 
       //cin>>s.Name;

       cout<<"Enter students email:";
       getline(cin,s.Email);//puri line prine
       //cin>>s.Email;

       cout<<"Enter the mobile number :";
       getline(cin,s.Mobile);
       //cin>>s.Mobile;

       cout<<"Enter students rollnumber :";
       cin>>s.Rollnumber;
       cin.ignore();  // integer value ke baad agr string print kerwana h vo cin ke aage ignore likha jruri h // integer ke baad hi ignor likhte h
       students.push_back(s);
       cout<<s.Name<<endl;
       cout<<s.Email<<endl;
       cout<<s.Rollnumber<<endl;
       cout<<s.Mobile<<endl;
       cout<<"\n";
   }

