#include <bits/stdc++.h>
#include <algorithm>
#include <vector>
using namespace std;
void printArray(vector<int> arr, int n)
{
   
    for (int i = 0; i < n; i++)
    {
        cout<< arr[i]<<""<<endl;
    }
    cout<<endl;
}
int getPivot(vector<int> arr, int n)
{
    // use binary search-

    int s = 0, e = n - 1;
    int mid = s + (e - s) / 2;
    while (s < e)
    {
        if (arr[mid] >= arr[0])
        {
            s = mid + 1;
        }
        else
        {
            e = mid;
        }
        mid = s + (e - s) / 2;
    }
    return mid;
    printArray(arr, n);
}
int main()
{
    int size;
    vector<int> arr;
    cout << "Enter the size of the array:" << endl;
    cin >> size;
    cout << "The given array is:" << endl;
    for (int i=0; i < size; i++)
    {
        int pivot;
        cin >> pivot;
        arr.push_back(pivot);
    }
  int ans=  getPivot(arr, size);
  cout<<"Pivote element is :- "<<arr[ans]<<endl;

    return 0;
}