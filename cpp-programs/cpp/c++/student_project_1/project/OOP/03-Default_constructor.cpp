#include<iostream>
#include<string>
using namespace std;

class student
{
    public : 
      
    student()
    {
        cout << "Default constructor called" << endl;
    }
    
    student()
    { 
        cout << "Name is : " << name << " " << endl;
    }
};

int main()
{
    student st1;
    student st2("Ravi verma");

  /*
  student st3(20); // ye error dega kyuki iteger type ka koi 
  */
}