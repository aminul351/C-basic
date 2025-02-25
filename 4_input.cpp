#include <iostream>

using namespace std;

int main()

{
    int num;
    cout << "Enter a number : ";
    cin >> num;
    
    cout << "The entered number is : " << num << endl;

    // sum of two numbers
    int num1, num2, sum;

    cout << "\n Enter num1 : ";
    cin >> num1;

    cout << "Enter num2 : ";
    cin >> num2;
    
    sum = num1 + num2;
    cout << "The sum is : " << sum;
    return 0;
}