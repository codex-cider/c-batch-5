// if we get error than include headerfile #include<stdio.h>

#include<iostream>
using namespace std;    // agr ye lgate h to hame bar bar cin or cout ke aage std:: ni lgana hoga. 
int main()             // sirf main me void ni lgate 
{
    int a,b;
    cout << "Enter the value of a : ";
    cin >>a;
    cout << "Enter the value of b : ";
    cin >>b;
    cout << "Sum is : "<< a+b;
    printf("\nsum is : %d", a+b);     // kabi ye hme cpp me use krna to c ki header file add krna hogi 

    printf("\nSum of %d & %d is %d", a,b,a+b);
    cout << "\nsum is : " << a  << " &" <<  b << " is" << a+b;
}
// data bainding // current obj this 
//class type ke variable ko object bolte h
