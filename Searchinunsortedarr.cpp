// write a program to search an element in an unsorted array
#include <bits/stdc++.h>
using namespace std;
int findelemets(int arr[], int n, int key)
{
    for (int i = 0; i < n; i++)
        if (arr[i] == key)
            return i;
    // if key is not found
    return -1;
}
// driver code
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6};
    int N = sizeof(arr) / sizeof(int);
    cout<<"Given array is :"<<endl;
    for(int i =0;i<N; i++)
    {
        cout<<arr[i]<<endl;
    }
    int key = 6;

    // Function call
    int position = findelemets(arr, N, key);
    if (position == -1)
        cout << "Element not found :" << endl;
    else
        cout << "Element found at :" << position + 1 << endl;
    return 0;
}