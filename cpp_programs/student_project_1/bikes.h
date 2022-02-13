#include<iostream>
#include<string>
#include<vector>
using namespace std;
class Bikes
{
    public:
    int owers_mobile_no,bike_price,option;
    string owner_name,owers_address,bike_modle_no,sold_date;
    void addDetails()
    {
       cout<<"Add Owner Name :";
       getline(cin,owner_name);
       cout<<"Add Oweners Address :";
       getline(cin,owers_address);
       cout<<"Add Bike Modle no. :";
       getline(cin,bike_modle_no);
       cout<<"Add Selling Date :";
       getline(cin,sold_date);
       cout<<"Add Owners Mobile no. :";
       cin>>owers_mobile_no;
       cin.ignore();
       cout<<"Add bike Price :";
       cin>>bike_price;
       cin.ignore();
    }
    void printAllOwnersDetails(vector<Bikes>Details)
    {
        for(int i=0;i<Details.size();i++)
        {
          Bikes st = Details.at(i);
        cout<<"\n********************************\n"<<endl;
        cout<<"Owner's Name :"<<st.owner_name<<endl;
        cout<<"Owner's Address :"<<st.owers_address<<endl;
        cout<<"Owner's Mobile no. :"<<st.owers_mobile_no<<endl;
        cout<<"Bike's Modle :"<<st.owers_mobile_no<<endl;
        cout<<"Bike's Price :"<<st.bike_price<<endl;
        cout<<"Bike's Selling Date :"<<st.sold_date<<endl;
        }
    }
    vector<Bikes> deleteOwnersDetails(vector<Bikes>details)
    {
        string n;
          cout<<"Enter Owner's name :";
          getline(cin,n);
          vector<Bikes>b;
          for(int i=0;i<details.size();i++)
          {
              Bikes st=details.at(i);
              int find =st.owner_name.compare(n);
              if(find!=0)
              {
                  b.push_back(st);
              }
          } 
          return b;
    }
    bool findOwnerByName(vector<Bikes>details,string name)
      {
          bool findOwner = false;
        for(int i=0;i<details.size();i++)
        {
            Bikes st = details.at(i); 
            int result = st.owner_name.compare(name);
            if(result==0)
            {
                findOwner=true;
            }
        }
        return findOwner;
      }
      void searchOwner(vector<Bikes>details)
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
};