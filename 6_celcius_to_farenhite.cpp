#include <iostream>
using namespace std;

int main()
{
    float celcius, farenhite;
    cout << "Enter Celcius : ";
    cin >> celcius;

    farenhite = 1.8 * celcius + 32;
    
    cout << "The Farenhyte temp is :" << farenhite;

    return 0;
}