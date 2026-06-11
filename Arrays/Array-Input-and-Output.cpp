/*
Program: Array Input and Output
Language: C++
Time Complexity: O(n)
Space Complexity: O(n)
*/

#include <iostream>
using namespace std;

int main()
{
    int size = 5;
    int marks[size];

    cout << "Enter 5 elements: ";

    for (int i = 0; i < size; i++)
    {
        cin >> marks[i];
    }

    cout << "Array Elements: ";

    for (int i = 0; i < size; i++)
    {
        cout << marks[i] << " ";
    }

    return 0;
}
