#include <iostream>
using namespace std;
// Bubble sort 
void Bubblesort(int arr[], int n)
{
    bool flag = 0;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                flag = 1;
            }
        }
        if (flag == 0)
            break;
    }
}
// for printing the number
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
    int arr[] = {2, 3, 1, 4};
    int n = sizeof(arr) / sizeof(int);
    Bubblesort(arr, n);
    printarr(arr, n);
    return 0;
}