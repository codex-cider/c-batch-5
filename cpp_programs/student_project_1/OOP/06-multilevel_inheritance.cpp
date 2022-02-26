#include<iostream>
#include<string>
using namespace std;
class Univercity
{
    protected:
    void printUnivercityName()
    {
        cout<<"------RGPV-------"<<endl;
    }
};
class Collage:public Univercity
{
    protected:
    void printCollageName()
   {
        cout<<"------PIEMR-------"<<endl;
   }
};
class Student:public Collage
{
  protected:
  void printStudentName()
  {
      cout<<"-------Ravi-------"<<endl;
  }
  public:
  void printStudentInfo()
  {
      this->printUnivercityName();
      this->printCollageName();
      this->printStudentName();
  }
};
int main()
{
  Student student;
  student. printStudentInfo();
}