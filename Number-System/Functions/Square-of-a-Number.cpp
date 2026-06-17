/*
Program: Square of a Number using Function
Language: C++
Time Complexity: O(1)
Space Complexity: O(1)
*/

#include <iostream>
using namespace std;

int square(int num)
{
    return num * num;
}

int main()
{
    int num;

    cout << "Enter a number: ";
    cin >> num;

    int result = square(num);

    cout << "Square = " << result;

    return 0;
}
