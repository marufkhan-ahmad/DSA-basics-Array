#include <iostream>
using namespace std;
// Selection sort
void selectionsort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int minIndex = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[minIndex])
                minIndex = j;
        }
        swap(arr[minIndex], arr[i]);
    }
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
    int arr[] = {5, 6, 4, 7, 3, 1, 2, 8};
    int n = sizeof(arr) / sizeof(int);
    selectionsort(arr, n);
    printarr(arr, n);
    return 0;
}