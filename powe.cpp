// wap to reverse a number
#include <bits/stdc++.h>
#include <algorithm>
#include <vector>
using namespace std;
void printArray(vector<int> arr, int n)
{
    cout << "The reverse array is :" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " " << endl;
    }
    cout << endl;
}
void reverse(vector<int> arr, int n)
{
    int start = 0, end = n - 1;
    while (start <= end)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
    printArray(arr, n);
}

int main()
{
    int size;
    vector<int> arr;
    cout << "Enter the size of the array:" << endl;
    cin >> size;
    cout << "The given array is :" << endl;
    for (int i = 0; i < size; i++)
    {
        int element;
        cin >> element;
        arr.push_back(element);
        reverse(arr, size);
    }
    return 0;
}