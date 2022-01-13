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
      cout<<"how many seats in the bus :";
      cin>>bus.seats;
      cout<<"what is the starting point of the bus :";
      cin>>bus.startingPoint;
      cout<<"what is the ending point of the bus :";
      cin>>bus.endingPoint;
      cout<<"what type of the bus :";
      cin>>bus.type;
    }
};
int main()
{
   
}