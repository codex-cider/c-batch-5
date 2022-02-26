#include<iostream>
#include<string>
using namespace std;
class College
{
    string ownername;
    protected:
    string collegename;
    public:
    College (string collegename)
    {
        this->collegename=collegename;
    }
};
class Student:public College 
{
   protected:
   string name,rollNumber;
   public:
   Student(string n,string rollN,string collegename):College(collegename)
   {
       name = n;
       rollNumber = rollN;
   }
   void printStudentInfo()
   {
       cout<<"\n------------------------------------------\n";
       cout<<"College Name :        "<<this->collegename<<endl;
       cout<<"Student Name :        "<<this->name<<endl;
       cout<<"Student's Rollnumber :"<<this->rollNumber<<endl;
   }
};
int main()
{
   string name,rollNumber,collegename;
   cout<<"Enter Name :";
   getline(cin,name);
   cout<<"Enter Roll Number :";
   getline(cin,rollNumber);
   cout<<"Enter Collage name :";
   getline(cin,collegename);
    Student st(name,rollNumber,collegename);
  st.printStudentInfo();
}