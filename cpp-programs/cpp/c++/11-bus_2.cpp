#include<iostream>
#include<string>
using namespace std;
class Bus
{
    public:
    int seats;
    string startingPoint;
    string destination;
    string type;
};
class BusOpration 
{
    public : 
    Bus bus;
    void getDetails()
    {
        cout<<"How many seats are in bus : ";
        cin>>bus.seats;
        cout<<"what is the starting point of this bus : ";
        cin>>bus.startingPoint;
        cout<<"what is the destination of this bus : ";
        cin>>bus.destination;
        cout<<"What is the type of this bus : ";
        cin >>bus.type;
    }
    void printDetails()
    {
        cout<<"How many seats are in bus : ";
        cin>>bus.seats;
        cout<<"what is the starting point of this bus : ";
        cin>>bus.startingPoint;
        cout<<"what is the destination of this bus : ";
        cin>>bus.destination;
        cout<<"What is the type of this bus : ";
        cin >>bus.type;
    }
};
int main()
{
   
}
