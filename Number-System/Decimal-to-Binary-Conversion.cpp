/*
Program: Decimal to Binary Conversion
Language: C++
Time Complexity: O(log n)
Space Complexity: O(1)
*/

#include <iostream>
using namespace std;

int main()
{
    int decimal, binary = 0, place = 1, remainder;

    cout << "Enter a decimal number: ";
    cin >> decimal;

    while (decimal > 0)
    {
        remainder = decimal % 2;      // Get remainder
        binary = binary + remainder * place;
        place = place * 10;
        decimal = decimal / 2;        // Update decimal number
    }

    cout << "Binary Number = " << binary;

    return 0;
}
