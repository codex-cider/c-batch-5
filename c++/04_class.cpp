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

    a.brand = "redmi pro max";
    a.battery = "80% in 5 min";
    a.ram = "6gb";
    a.camera = "108mp";
    a.cost = "10k";
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