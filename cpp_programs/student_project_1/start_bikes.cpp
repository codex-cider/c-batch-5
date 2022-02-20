#include<iostream>
#include"bikes.h"
#include<vector>
  vector<Bikes>details;
 int main()
 { 
       Bikes b;
     int A=0;
     do
     {
         cout<<"\n";
         cout<<"Press 1 for Add Owners Details"<<endl;
         cout<<"Press 2 for Print All Owners Details "<<endl;
         cout<<"Press 3 for Delete Owners Details "<<endl;
         cout<<"Press 4 for Search Owner "<<endl;
         cout<<"Press 5 for Delete All Owners Details "<<endl;
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
          b.searchOwner(details);
      }
      else if(b.option==5)
      {
            details.clear();
      }
      else
      {
         continue;
      }
      cout<<"press 1 for continue\n";
      cin>>A;
     }
     while(A==1);
 }