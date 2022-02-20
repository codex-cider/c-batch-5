#include<iostream>
using namespace std;
class Student
{
    public:
    // constructor is a special type of function whose name issame as class name
    //constructor don't have return type but it return class(object) it self
  Student()
  {
     cout<<"called constructor"<<endl;

  }
};
int main()
{
    Student st;
    Student st2,st3;//jab bhi apan calss ak object banate h to class ka constructor bhi call hota h
}