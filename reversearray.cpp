// reverse numbers in array
#include <bits/stdc++.h>
#include <iostream>
using namespace std;
void reverse(int arr[], int n, int m)
{
    if (n < m)
    {
        int temp = arr[n];
        arr[n] = arr[m];
        arr[m] = temp;
        n++;
        m--;
    }
}
void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << endl;
    }
    cout << endl;
}
int main()
{
    int arr[] = {1, 2, 3};
    int arr1[] = {3, 4, 5};
    int n = sizeof(arr) / sizeof(int);
    cout << "The given array is :" << endl;
    printArray(arr, n);
    cout << "The reverse array is: " << endl;
    reverse(arr, 0, n - 1);
    printArray(arr, n);
    return 0;
}