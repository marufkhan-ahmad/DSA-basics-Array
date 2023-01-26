#include <iostream>
using namespace std;
int findmaxmin(int arr[], int n)
{
    int min = arr[0], max = arr[0];

    for (int i = 1; i < n; i++)
        if(arr[i]>max)
        max = arr[i];
        return max;
    // if(arr[i]<min)
    // min = arr[i];
    // return min;
     
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
    int arr[] = {3, 4, 2, 1};
    int n = sizeof(arr) / sizeof(int);
    cout << "Given array:" << endl;
    PrintArray(arr, n);
    cout << "Minm number:" << findmaxmin(arr, n) << endl;
    // findmaxmin(arr, n);
    // PrintArray(arr, n);
    return 0;
}