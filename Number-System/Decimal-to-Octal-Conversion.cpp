/*
Program: Decimal to Octal Conversion
Language: C++
Time Complexity: O(log n)
Space Complexity: O(1)
*/

#include <iostream>
using namespace std;

int main()
{
    int decimal, octal = 0, place = 1, remainder;

    cout << "Enter a decimal number: ";
    cin >> decimal;

    while (decimal > 0)
    {
        remainder = decimal % 8;
        octal = octal + remainder * place;
        place = place * 10;
        decimal = decimal / 8;
    }

    cout << "Octal Number = " << octal;

    return 0;
}
