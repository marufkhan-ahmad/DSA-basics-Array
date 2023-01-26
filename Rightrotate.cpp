// write a program to right rotate of a given array
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void Rightrotate(int arr[], int N, int d)
{
    // reverse the array
    reverse(arr, arr + N);

    // reverse the first d element
    reverse(arr, arr + d);

    // reverse the elements from the k
    // till the end of the array
    reverse(arr + d, arr + N);
}

void Print(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << endl;
    }
}

// driver code
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int N = sizeof(arr) / sizeof(int);
    int d = 2;
    cout << "The given array is :" << endl;
    Print(arr, N);
    cout << "The right rotated array is :" << endl;
    Rightrotate(arr, N, d);
    Print(arr, N);
    return 0;
}