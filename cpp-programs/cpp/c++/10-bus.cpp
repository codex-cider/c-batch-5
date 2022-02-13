#include<iostream>
#include<stdio.h>
using namespace std;
class bus
{
    public :
    int seats;
    string startingPoint;
    string destination;
    string type;
};
int main()
{
    bus x;
    x.seats;
    x.startingPoint;
    x.destination;
    x.type;
    cout<<"How many seats are in bus : ";
    cin>>x.seats;
    cout<<"what is the starting point of this bus : ";
    cin>>x.startingPoint;
    cout<<"what is the destination of this bus : ";
    cin>>x.destination;
    cout<<"what is the type of this bus : ";
    cin>>x.type;
}


