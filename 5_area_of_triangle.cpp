#include <iostream>

using namespace std;

int main()
{
    float area, base, height;
     

    cout << "Enter base : " ;
    cin >> base;
    cout << "Enter height : " ;
    cin >> height;

    area = (0.5 * base * height);

    cout << "The area is : " << area;
    return 0;
}