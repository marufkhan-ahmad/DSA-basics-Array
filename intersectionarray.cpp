// write a program to find the intersection of array

// Function prints Intersection of arr1[] and arr2[]
// m is the number of elements in arr1[] and n in arr2[]
#include<iostream>
using namespace std;
void intersectionArr(int arr1[], int arr2[], int m, int n)
{
    // two index variable i and j initialize with zero
    int i =0, j=0;

    // use while loop to compare the arr1[] and arr2[]
    // if arr1[i] is smaller than arr2[j] then increament the i++
    // if arr1[i] is greater than arr2[j] then increament the j++
    // if arr1[i] and arr2[j] is same then print any of them and do i++ and j++

    while(i<m && j<n)
    {
        if(arr1[i]<arr2[j])
        
            i++;
        
        else if(arr2[j]<arr1[i])
        
            j++;
        
        else  //if(arr1[i] == arr2[j])
        {
            cout<<arr2[j++]<<endl;
            i++;
        }

    }
}
// Driver code
int main()
{
    int arr1[] = {1,2,3,4,5};
    int arr2[] = {2,3,6,7};
    int m = sizeof(arr1)/sizeof(arr1[0]);
    int n = sizeof(arr2)/sizeof(arr2[0]);
    // for printing the array elements
    cout<<"First array is :"<<endl;
    for(int i =0;i<m; i++)
    {
        cout<<arr1[i]<<endl;
    }
    cout<<"Second array is :"<<endl;
    for(int j =0;j<n; j++)
    {
        cout<<arr2[j]<<endl;
    }
    // for printing if the intersection elements are found
    cout<<"Intersection of array is :"<<endl;
    intersectionArr(arr1, arr2, m, n);
    return 0;
}