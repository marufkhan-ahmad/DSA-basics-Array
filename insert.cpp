#include <iostream>
using namespace std;
#define max 100
int main()
{
    int arr[max], n, min, i, j;
    cout << "Enter the size of the array:" << endl;
    cin >> n;
    cout << "The given arrays are:" << endl;
    for ( i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    // insertion sort
    for (i = 0; i < n - 1; i++)
    {
        min = i;
        for (j = i + 1; j < n; j++)
        {
            if (arr[min] > arr[j])
                min = j;
        }
        if (i != min)
        {
            int temp = arr[i];
            arr[i] = arr[min];
            arr[min] = temp;
        }
    }
    cout << "The sorted array is :" << endl;
    for (i = 0; i < n; i++)
        cout << arr[i] << " " << endl;
    cout << endl;
    return 0;
}