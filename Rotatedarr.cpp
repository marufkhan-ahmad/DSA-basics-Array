// write a program to do left rotation of an  array
//  array = [1,2,3,4,5,6,7], d = 2
#include <iostream>
using namespace std;
void rotate(int arr[], int d, int n)
{
    // create temporary array
    int temp[n];
    int k = 0;

    // store the elements from second index to the last index
    for (int i = d; i < n; i++)
    {
        temp[k] = arr[i];
        k++;
    }

    // now store the first second elements into the temp array
    for (int i = 0; i < d; i++)
    {
        temp[k] = arr[i];
        k++;
    }

    //    copy the elemets of the temp array into the original array
    for (int i = 0; i < n; i++)
    {
        arr[i] = temp[i];
    }
}

// function to print the array
void printarr(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << endl;
    }
    cout << endl;
}

// Driver code
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int N = sizeof(arr) / sizeof(int);
    int d = 2;
    // Function calling
    cout << "Given array is:" << endl;
    printarr(arr, N);
    cout << "Rotated array is :" << endl;
    rotate(arr, d, N);
    printarr(arr, N);
    return 0;
}