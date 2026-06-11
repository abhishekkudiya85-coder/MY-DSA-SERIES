/*
Program: Find Minimum Element in Array
Language: C++
Time Complexity: O(n)
Space Complexity: O(1)
*/

#include <iostream>
#include <climits>
using namespace std;

int main()
{
    int num[] = {5, 15, 22, 1, -15, -24};
    int size = 6;

    int smallest = INT_MAX;

    for (int i = 0; i < size; i++)
    {
        if (num[i] < smallest)
        {
            smallest = num[i];
        }
    }

    cout << "Smallest Element = " << smallest;

    return 0;
}
