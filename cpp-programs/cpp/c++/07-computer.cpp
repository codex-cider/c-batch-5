#include<iostream>
#include<string.h>
using namespace std;
class Computer
{
    public : 
    string name;
    int ram, processor;
    char generation, password;
};

int main()
{
    Computer a;
    a.name;
    a.ram;
    a.processor;
    a.generation;
    a.password;

    cout << "name : ";
    cin >> a.name;
    
    cout << "ram : ";
    cin >> a.ram;
    
    cout << "processor : ";
    cin >> a.processor;
    
    cout << "generation : ";
    cin >> a.generation;
    
    cout << "password : ";
    cin >> a.password;
    
}
