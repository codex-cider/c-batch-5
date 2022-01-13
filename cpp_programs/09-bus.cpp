#include<iostream>
#include<string>
using namespace std;
class Bus
{
    public:
    int seats;
    string startingPoint;
    string endingPoint;
    string type;
};
class BusOpration
{
    public:
    Bus bus;
    void getDetails()
    {
      cout<<"How many seats in the bus :";
      cin>>bus.seats;
      cout<<"What is the starting point of the bus :";
      cin>>bus.startingPoint;
      cout<<"What is the ending point of the bus :";
      cin>>bus.endingPoint;
      cout<<"What type of the bus :";
      cin>>bus.type;
    }
    void printDetails()
    {
      cout<<"\nTotal seats in the Bus :"<<bus.seats;
      cout<<"\nStarting point of the Bus :"<<bus.startingPoint;
      cout<<"\nEnding point of the Bus :"<<bus.endingPoint;
      cout<<"\nType of Bus :"<<bus.type;
    }
};
int main()
{
    BusOpration x;
    x.getDetails();
    x.printDetails();
}