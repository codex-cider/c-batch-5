#include<iostream>
#include<string>
using namespace std;
class Student
{
    public:
    Student()//aisa constructor jisme koi perametere naa ho defult constructor kahte h
    {
       cout<<"Defult constructor called"<<endl;
    }
    Student(string name)//perameterized constructor
    {
      cout<<"Name is:"<<name<<" "<<endl;
    }
};
int main()
{
  Student st; //yaha pr defult constructor called hoga
  Student st2("Ravi yadav");//yaha pe perameter constructor called hoga
 
}