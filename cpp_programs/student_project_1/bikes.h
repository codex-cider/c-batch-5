#include<iostream>
#include<string>
#include<vector>
using namespace std;
class Bikes
{
    public:
    int bike_modle_no,owers_mobile_no,bike_price,sold_date;
    string owner_name,owers_address;
    void addDetails()
    {
       cout<<"Add Owner Name :";
       getline(cin,owner_name);
       cout<<"Add Oweners Address :";
       getline(cin,owers_address);
       cout<<"Add Owners Mobile no. :";
       cin>>owers_mobile_no;
       cout<<"Add Bike Modle no. :";
       cin>>bike_modle_no;
       cout<<"Add bike Price :";
       cin>>bike_price;
       cout<<"Add Selling Date :";
       cin>>sold_date;
       cin.ignore();
    }
    void printAllOwnersDetails(vector<Bike>Details)
    {
        for(int i=0;i<Details.size();i++)
        {
          Bike st = Details.at(i);
        cout<<"\n********************************\n"<<endl;
        cout<<"Owner's Name :"<<st.owner_name<<endl;
        cout<<"Owner's Address :"<<st.owers_address<<endl;
        cout<<"Owner's Mobile no. :"<<st.owers_mobile_no<<endl;
        cout<<"Bike's Modle :"<<st.owers_mobile_no<<endl;
        cout<<"Bike's Price :"<<st.bike_price<<endl;
        cout<<"Bike's Selling Date :"<<st.sold_date<<endl;
        }
    }
    vector<Bikes> deleteOwnersDetails(vector<Bike>details)
    {
        string n;
          cout<<"Enter Owner's name :";
          getline(cin,n);
          vector<Bike>b;
          for(int i=0;i<details.size();i++)
          {
              Bike st=details.at(i);
              int find =st.owner_name.compare(n);
              if(find!=0)
              {
                  b.push_back(st);
              }
          } 
          return b;
    }
}
bool findOwnerByName(vector<Bike>details,string name)
      {
          bool findOwner = false;
        for(int i=0;i<details.size();i++)
        {
            Bike st = details.at(i); 
            int result = st.owner_name.compare(name);
            if(result==0)
            {
                findOwner=true;
            }
        }
        return findOwner;
      }
      void searchOwner(vector<Bike>details)
      {
        string n;
        cout<<"Enter Owner name :";
        getline(cin,n);
        bool findOwner=findOwnerByName(details,n);
        if(findOwner)
        {
            cout<<"Owner find with name :"<<n<<endl;
        }
        else
        {
            cout<<"Owner not found"<<endl;
        }
      }
