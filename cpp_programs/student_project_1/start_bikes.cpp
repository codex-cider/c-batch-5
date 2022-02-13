#include<iostream>
#include"bikes.h"
#include<vector>
  vector<Bike>details;
 int main()
 { 
       Bike b;
     int A=0;
     do
     {
         cout<<"Enter 1 for Add Owners Details:"<<endl;
         cout<<"Enter 2 for Print All Owners Details :"<<endl;
         cout<<"Enter 3 for Delete Owners Details :"<<endl;
         cout<<"Enter 4 for Search Owner :"<<endl;
         cout<<"Enter 5 for Delete All Owners Details :"<<endl;
         cin>>b.option;
          cin.ignore();
      if(b.option==1)
      {
          b.addDetails();
          details.push_back(b);
      }
      else if(b.option==2)
      {

          b.printAllOwnersDetails(details);
      }
      else if(b.option==3)
      {
       details = b.deleteOwnersDetails(details);
      }
      else if(b.option==4)
      {
          b.searchOwner(students);
      }
      else if(b.option==5)
      {
            details.clear();
      }
      else
      {
          continue;
      }
      cout<<"press 1 for continue";
      cin>>con;
     }
     while(A==1);
 }