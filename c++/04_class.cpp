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
    Mobile b;
    Mobile c;
    Mobile d;
    Mobile e;
    a.brand = "redmi pro max";
    b.battery = "80% in 5 min";
    c.ram = "6gb";
    d.camera = "108mp";
    e.cost = "10k";
    cout << "\nbrand name is:"
         << a.brand;
    cout << "\nbattery is:"
         << b.battery;
    cout << "\nstorage is:"
         << c.ram;
    cout << "\ncamera is:"
         << d.camera;
    cout << "\ncost of mobile is:"
         << e.cost;
}