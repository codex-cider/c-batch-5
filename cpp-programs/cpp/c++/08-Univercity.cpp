#include<iostream>
#include<string.h>
using namespace std;
 
class Univercity
{
    public : 
    
    string U_name;
    int No_Of_faculties, T_classRooms, T_students, T_Busses;

};

int main()
{
    Univercity x;
    x.U_name;
    x.No_Of_faculties;
    x.T_classRooms;
    x.T_students;
    x.T_Busses;

    cout << "Name of Univercity is : ";
    cin >> x.U_name;
    
    cout << "Total no of faculties is : ";
    cin >> x.No_Of_faculties;
    
    cout << "Totalno. of classrooms : ";
    cin >> x.T_classRooms;
    
    cout << "Total no. of students : ";
    cin >> x.T_students;
    
    cout << "Total no. of busses : ";
    cin >> x.T_Busses;

}
