#include <iostream>
using namespace std;
void reverse(int arr[], int start, int end)
{
    if (start >= end)
    {
        return;
    }
    int temp = arr[start];
    arr[start] = arr[end];
    arr[end] = temp;

    reverse(arr, start + 1, end - 1);
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
    int arr[] = {2, 3, 1, 5, 6};
    int n = sizeof(arr) / sizeof(int);
    cout << "The given array is :" << endl;
    PrintArray(arr, n);
    cout << "The reverse array is :" << endl;
    reverse(arr, 0, n - 1);
    PrintArray(arr, n);
    return 0;
}