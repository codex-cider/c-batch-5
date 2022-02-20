#include<iostream>
#include<string>
using namespace std;
class Student
{
    public:
    Student(string name) //defing parameter in constructor called perameterrized constructor
    {
        cout<<"name is:"<<name<<" "<<endl;
    }
};
int main(){
    Student st("Ravi");
    Student st2("Devendra yadav");//passing arguments to the constructor
}
