#include <iostream>
#include<algorithm>
using namespace std;
#define max 100
int Bsearch(int arr[], int size, int item);
void sort(int arr[],int size);
int main()
{
    int arr[max], i, item, index, size;
    cout << "Enter the number of elements:" << endl;
    cin >> size;
    cout << "Enter the elements of the array:" << endl;
    for (i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    cout<<"Befor sorting"<<endl;
     for (i = 0; i < size; i++)
    {
        cout << arr[i]<<"  ";
    }cout<<endl;
    cout << "Enter the item to be searched:" << endl;
    cin >> item;
    index = Bsearch(arr, size, item);
    cout<<"After sorting"<<endl;
     for (i = 0; i < size; i++)
    {
        cout << arr[i]<<"  ";
    }cout<<endl;
    if (index == -1)
    {
        cout << item<< " is not found "  << endl;
    }
    else
    {
        cout <<item << " is found at position :" << index+1 << endl;
    }
    return 0;
}
int Bsearch(int arr[], int size, int item)
{
    sort(arr,size);
    int low = 0, up = size - 1, mid;
    while (low <= up)
    {
        mid = (low + up) / 2;
        if (item > arr[mid])
            low = mid + 1; // left half
        else if (item < arr[mid])
            up = mid - 1; // right half
        else
            return mid;
    }
    return -1;
}
void sort(int arr[],int size)
{
    for(int i=0;i<size;i++)
    {
        for(int j=0;j<size-1-i;j++)
        {
            if(arr[j]>arr[j+1])
            {
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
}