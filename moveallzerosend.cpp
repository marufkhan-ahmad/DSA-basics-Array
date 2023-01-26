// Move all zeroes to end of array
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[] = {1,0,0,2,3,4,5,0,7,0,0,8};
    int n = sizeof(arr)/sizeof(int);
    int j = 0;
    for(int  i =0; i<n; i++)
    {
        if(arr[i]!=0)
        {
            // partitioning the array
            swap(arr[j], arr[i]);
            j++;
        }
    }
    cout<<"The given array after shifting the zeroes is :"<<endl;
    for(int i = 0; i<n; i++)
    {
        cout<<arr[i]<<" "<<endl;
    }
    return 0;
}