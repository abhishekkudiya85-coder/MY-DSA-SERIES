/*
Program: Octal to Decimal Conversion
Language: C++
Time Complexity: O(log n)
Space Complexity: O(1)
*/

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int octal, decimal = 0, remainder, i = 0;

    cout << "Enter an octal number: ";
    cin >> octal;

    while (octal != 0)
    {
        remainder = octal % 10;
        decimal += remainder * pow(8, i);

        octal /= 10;
        i++;
    }

    cout << "Decimal Number = " << decimal;

    return 0;
}
