#include <iostream>
using namespace std;
// initial function
void Merge(int arr[], int start, int mid, int end)
{
    int i = start;
    int j = 0;
    int k = mid + 1;
    int b[end - start + 1];
    while (i <= mid && k <= end)
    {
        if (arr[i] <= arr[k])
        {
            b[j] = arr[i];
            i++;
        }
        else
        {
            b[j] = arr[k];
            k++;
        }
        j++;
    }
    while (i <= mid)
    {
        b[j] = arr[i];
        j++;
        i++;
    }
    while (k <= end)
    {
        b[j] = arr[k];
        k++;
        j++;
    }
    int h = start;
    for (int i = 0; i < end - start + 1; i++)
    {
        arr[h] = b[i];
        h++;
    }
}
// Merge sort
void Mergesort(int arr[], int start, int end)
{
    if (start < end)
    {
        int mid = start + (end - start) / 2; // O(1)
        Mergesort(arr, start, mid);          // T(n/2)
        Mergesort(arr, mid + 1, end);        // T(n/2)
        Merge(arr, start, mid, end);         // O(n)
    }
}
void PrintArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {

        cout << arr[i];
    }
    cout << endl;
}
int main()
{
    int arr[] = {3, 2, 4, 5, 6, 7, 8, 9, 1};
    int n = sizeof(arr) / sizeof(int);
    PrintArray(arr, n);
    Mergesort(arr, 0, n - 1);
    PrintArray(arr, n);
    return 0;
}