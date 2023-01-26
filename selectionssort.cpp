#include <bits/stdc++.h>
#include <iostream>
using namespace std;
void SelectionSort(int arr[], int n)
{
    int temp;
    for (int i = 0; i < n - 1; i++)
    {
        temp = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[temp])
            {
                temp = j;
            }
        }
        swap(arr[temp], arr[i]);
    }
}

void PrintArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << endl;
    }
    cout << endl;
}

int main()
{
    int arr[] = {3, 5, 4, 8, 6, 9, 7};
    int n = sizeof(arr) / sizeof(int);
    cout << "Unsorted array:" << endl;
    PrintArray(arr, n);
    cout << "Sorted Array :" << endl;
    SelectionSort(arr, n);
    PrintArray(arr, n);
    return 0;
}