// write a program to find the 3 largest element in an array
#include <bits/stdc++.h>
using namespace std;
// Function to print three largest element
void Threelargest(int arr[], int n)
{
    int first, second, third;

    // atleast 3 elements should be there
    if (n < 3)
    {
        cout << "Invalid Input" << endl;
        return;
    }
    third = second = first = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        // if current element is greater than first
        if (arr[i] > first)
        {
            third = second;
            second = first;
            first = arr[i];
        }
        // If arr[i] is in between first
        // and second then update second
        else if (arr[i] > second && arr[i] != first)
        {
            third = second;
            second = arr[i];
        }
        else if (arr[i] > third && arr[i] != second)
            third = arr[i];
    }
    cout << "The three largest elements are :" << endl
         << first << " " << second << " " << third << endl;
}

int main()
{
    int arr[] = {12, 13, 14, 100, 3, 4, 70};
    int n = sizeof(arr) / sizeof(int);
    Threelargest(arr, n);
    return 0;
}