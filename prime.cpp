// find the sum of the array
#include <bits/stdc++.h>
#include <algorithm>
#include <vector>
using namespace std;
int prime(vector<int> arr, int n)
{
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum = sum + i;
    }
    return sum;
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
    }
    cout << "sum of the number in array is :" << prime(arr, size) << endl;
    return 0;
}