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
int main()
{
    Bus x;
    x.seats;
    x.startingPoint;
    x.endingPoint;
    x.type;
    cout<<"How many seats in the Bus :";
    cin>>x.seats;
    cout<<"what is the starting point of bus :";
    cin>>x.startingPoint;
    cout<<"what is the ending point of bus :";
    cin>>x.endingPoint;
    cout<<"Type of bus :";
    cin>>x.type;
    cout<<"\nHow many seats in the Bus :"<<x.seats;
    cout<<"\nwhat is the starting point of bus :"<<x.startingPoint;
    cout<<"\nwhat is the ending point of bus :"<<x.endingPoint;
    cout<<"\nType of bus :"<<x.type;
}