#include <bits/stdc++.h>
#include <algorithm>
#include <vector>
using namespace std;
int Bsearch(vector<int> arr, int n, int k)
{
    int start = 0, end = n - 1;
    int mid = start + (end - start) / 2;
    while (start < end)
    {
        if (arr[mid] == k)
        {
            return k;
        }
        else if (arr[mid] > k)
        {
            end = mid - 1;
        }
        else if (arr[mid] < k)
        {
            start = mid + 1;
        }
        mid = start + (end - start) / 2;
    }
    return -1;
}
void printArray(vector<int> arr, int n)
{

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << "" << endl;
    }
    cout << endl;
}

int main()
{
    int size;
    vector<int> arr;
    cout << "Enter size of the array:" << endl;
    cin >> size;
    cout << " The array is :" << endl;
    for (int i = 0; i < size; i++)
    {
        int ele;
        cin >> ele;
        arr.push_back(ele);
    }
    sort(arr.begin(), arr.end());
    cout << "Enter vale to search:" << endl;
    int val;
    cin >> val;

    int key = Bsearch(arr, size, val);
    if (key == -1)
        cout << "Value  is not found\n ";
    else
        cout << "Value is found\n";
    printArray(arr, size);
    return 0;
}