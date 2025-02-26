#include <iostream>
using namespace std;

int main()
{

    // for loop
    int i;
    for (i = 0; i < 10; i++)
    {
        cout << i << endl;
    }

    // while loop
    int a;
    a = 0;
    while (a < 9)
    {
        cout << a << endl;
        a++;
    }

    // do while loop
    int p = 0;
    do {
        cout << p << endl;
        p++;
    } while(p<10);

    return 0;
}



// for or while loop --> condition check first 
// do while --> condition after