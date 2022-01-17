#include <iostream>
using namespace std;
class Student
{
       public:
    int name();
    int name()
    {
        cout<<"hi";
    }
}
int main()
{
    Student b; 
    b.Student;
    b.name();
}



#include<iostream>
using namespace std ;

class student
{
    public :                          // modifier 
                                      //public = koi bi access kr skta h object ki help se.
                                      //private = personal which can't be accessed without that particular
                                      //protected = object access ni kr skta 
                                      // student is a class name 
       int a = 10;                    //class variable are or instance variable
       void printstudentname()        //es function ko int typ ka bi bna skte h 
       {                              
           cout << "called function";
       }
};

// class is a category of things like variable, function.
// to access class we need object 
//class type ke variable ok object kehte h.


int main()
{
    int student;                                             
    student a;                                               //user defined data type 
                                                             // . oprator is use to access 
    cout << "Value of a inside student class is : " << at.a; // dot operator
}
