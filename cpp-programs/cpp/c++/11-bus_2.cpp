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
        cout<<"\nTotal seats in the bus : " << bus.seats;
        cout<<"\nThe starting point of the bus : " << bus.startingPoint;
        cout<<"\nThe destination point of the bus : " << bus.destination;
        cout<<"\nThe type of this bus : " << bus.type;
    }
};
int main()
{
    BusOpration x;
    x.getDetails();
    x.printDetails();
}
