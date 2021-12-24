#include <iostream>
using namespace std;
class Mobile
{
public:
    string brand, battery, ram, camera, cost;
};
int main()
{
    Mobile a;
    cout << "brand name is-";
    cin >> a.brand;
    cout << "battery is about- ";
    cin >> a.battery;
    cout << "ram is-";
    cin >> a.ram;
    cout << "camera is of -";
    cin >> a.camera;
    cout << "cost of mobile is-";
    cin >> a.cost;

    cout << "\nbrand name is:"
         << a.brand;
    cout << "\nbattery is:"
         << a.battery;
    cout << "\nstorage is:"
         << a.ram;
    cout << "\ncamera is:"
         << a.camera;
    cout << "\ncost of mobile is:"
         << a.cost;
}