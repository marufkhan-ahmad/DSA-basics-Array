// wap to find the maxm and minim value of array.
#include <bits/stdc++.h>
#include <algorithm>
#include <vector>
using namespace std;
int max_value(vector<int> arr, int n)
{
 int max = INT32_MIN;
 for(int i =0;i<n;i++)
 {
    if(arr[i]>max)
    max = arr[i];
 }
 return max;
}
int min_value(vector<int> arr, int n)
{
 int min = INT32_MAX;
 for(int i =0;i<n;i++)
 {
    if(min>arr[i])
    min = arr[i];
 }
 return min;
}
int main()
{
    int size;
   vector<int> arr;
    cout<<"Enter size:"<<endl;
    cin>>size;
    cout<<"The given array is :"<<endl;
    for(int i =0; i<size; i++)
    {
        int element;
        cin>>element;
        arr.push_back(element);
    }
    cout<<"Maximum value is :"<<max_value(arr,size)<<endl;
    cout<<"Minimum value is :"<<min_value(arr,size)<<endl;
    return 0;
}

  