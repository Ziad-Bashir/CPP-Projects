#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    const double Speed_of_Light = 3 * pow(10,8);
    double ShipVelocity;
    double ShipTime;

    cout << "Enter The Ship Time, Please: ";
    cin >> ShipTime;
    cout << "Enter The Ship Velocity, Please: ";
    cin >> ShipVelocity;
    ShipVelocity *= pow(10, 8);



    if(ShipVelocity < Speed_of_Light)
    {
    double LorentzaFactor = sqrt(1 - ((ShipVelocity / Speed_of_Light) * (ShipVelocity / Speed_of_Light)));
    double EarthTime = ShipTime / LorentzaFactor;
    cout << "The Earth Time is: " << EarthTime;
    } else
    {
        cout << "ShipVelocity Cann't Be More Than or Equal Speed of Light";
    }


    return 0;
}
