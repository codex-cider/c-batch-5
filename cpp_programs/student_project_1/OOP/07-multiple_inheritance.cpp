#include<iostream>
#include<string>
using namespace std;
class Collage
{
   protected:
   void printCollageName()
   {
       cout<<"---------SVITS--------"<<endl;
   }
};
class Hostel
{
    protected:
  void printHostelName()
  {
      cout<<"-------54 ranjeet hanuman--------"<<endl;
  }
};
class Student:public Collage,public Hostel
{
public:
void printBasicInfo()
{
    this->printCollageName();
    this->printHostelName();
}
};
int main()
{
  Student student;
  student.printBasicInfo();
}