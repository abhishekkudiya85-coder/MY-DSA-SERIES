/*
Program: Binary to Decimal Conversion
Language: C++
Time Complexity: O(log n)
Space Complexity: O(1)
*/

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int binary, decimal = 0, remainder, i = 0;

    cout << "Enter a binary number: ";
    cin >> binary;

    while (binary != 0)
    {
        remainder = binary % 10;
        decimal += remainder * pow(2, i);

        binary /= 10;
        i++;
    }

    cout << "Decimal Number = " << decimal;

    return 0;
}
