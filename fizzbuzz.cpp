#include <iostream>
using namespace std;
main()
{
    int num, i;
    cin >> num;
    for (i = 1; i <= num; i++)
    {
        if (i % 3 == 0 && i % 5 == 0)
            cout << "fizzbuzz\n"; 
        else if (i % 3 == 0)
            cout << "fizz\n";
        else if (i % 5 == 0)
            cout << "buzz\n";
        else
            cout << i<<"\n";
    }
}