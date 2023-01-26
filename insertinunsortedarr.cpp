 
#include <bits/stdc++.h>
using namespace std;
 
// Function to insert element
// at a specific position
int insertElement(int arr[], int n, int key, int capacity)
{
    if(n>=capacity)
    return n;
    arr[n] = key;
    return (n+1);
}

int main()
{
    int arr[20] = {1,2,3,4,5};
    int capacity = sizeof(arr)/sizeof(int);
    int n = 5;
    int key = 6;
    cout<<"Before insertion:"<<endl;
    for(int i =0;i<n;i++)
    cout<<arr[i]<<" "<<endl;
    
    // function call
    n = insertElement(arr, n, key, capacity);
    cout<<"After insertion:"<<endl;
    for(int i =0;i<n;i++)
    cout<<arr[i]<<" "<<endl;
    return 0;
}