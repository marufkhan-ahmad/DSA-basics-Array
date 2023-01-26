#include <iostream>
using namespace std;
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
// do partition
int partition(int arr[], int start, int end)
{
    // first element choosen as pivot
    int pivot = arr[start];
    int i = start;
    for (int j = start + 1; j <= end; j++)
    {
        if (arr[j] <= pivot)
        {
            i++;
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i], &arr[start]);
    return i;
}
// Quicksort
void Quicksort(int arr[], int start, int end)
{
    if (end<=start)
    {
        return;
    }
   int k = partition(arr, start, end);      // for pivot element
   Quicksort(arr, start, k-1);   //for left sort
    Quicksort(arr, k+1,end);   //for right sort
}
void printarr(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i];
    }
    cout << endl;
}
int main()
{
    int arr[] = {2,3,1,4};
    int n = sizeof(arr)/sizeof(int);
    printarr(arr,n);
    Quicksort(arr, 0, n-1);
    printarr(arr,n);
    return 0;
}