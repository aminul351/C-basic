#include <iostream>
using namespace std;

int main()
{
    int x = 3;
    int y = x--;
  

    cout  << "x is : " << x << endl; // 2 
    cout  << "y is : " << y << endl; // 3


    int a = 4;
    int b = --a;
    cout << "a is : " << a << endl; // 3
    cout << "b is : " << b  << endl; // 3

    int p = 5;
    int q = p++;
    cout << "p is : " << p << endl; // 6
    cout << "q is : " << q  << endl; // 5

    int m = 8;
    int n = ++m;
    cout << "m is : " << m  << endl; // 9
    cout << "n is : " << n  << endl; // 9

    return 0;

}