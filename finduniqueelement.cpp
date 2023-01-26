// find the unique elements of the given array:
#include <iostream>
using namespace std;
int findunique(int arr[], int n)
{
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        ans = ans ^ arr[i];
    }
    return ans;
}
int main()
{
    int arr[100];
    int size;
    cout << "Enter the size:" << endl;
    cin >> size;
    cout << "Entered elements are :" << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    cout << "The unique element is :" << findunique(arr, size) << endl;
    return 0;
}