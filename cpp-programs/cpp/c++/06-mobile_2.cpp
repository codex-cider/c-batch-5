#include<iostream>
using namespace std;
class Mobile
{
    public : 
    char brand;
    int ram, battary, camera, price;
    
}; 

int main()
{
    Mobile a;
    a.brand;
    a.ram ;
    a.battary;
    a.camera;
    a.price;
    cout << "Brand name : ";
    cin >> a.brand;
    cout << "Ram : ";
    cin >> a.ram;
    cout << "Battery : ";
    cin >>a.battary;
    cout << "Camera : ";
    cin  >>a.camera;
    cout << "Price : ";
    cin >> a.price;
    
}
