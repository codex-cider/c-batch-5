#include<iostream>
#include<string.h>
using namespace std;
 
class School
{
    public : 
    
    string S_name;
    int No_Of_teachers, T_classRooms, T_students, T_Busses;
};
int main()
{
    School x;
    x.S_name;
    x.No_Of_teachers;
    x.T_classRooms;
    x.T_students;
    x.T_Busses;

    cout << "S_name : ";
    cin >> x.S_name;
    
    cout << "No_Of_teachers : ";
    cin >> x.No_Of_teachers;
    
    cout << "T_classRooms : ";
    cin >> x.T_classRooms;
    
    cout << "T_students : ";
    cin >> x.T_students;
    
    cout << "T_Busses : ";
    cin >> x.T_Busses;
}
