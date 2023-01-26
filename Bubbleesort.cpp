#include <bits/stdc++.h>
#include <algorithm>
#include <vector>
using namespace std;
void BubbleSort(vector<int>& arr, int n) {
	for(int i =0; i<n-1; i++) {
		int check = 1;
		for(int j =0; j<n-i-1; j++) {
			if(arr[j]>arr[j+1]) {
//				int temp = arr[j];
//				arr[j] = arr[j+1];
//				arr[j+1] = temp;
				swap(arr[j], arr[j+1]);
				check =0;
			}
		}
		if(check==1)
			break;
	}
}
void printArray(vector<int> arr, int n) {
	for(int i =0; i<n; i++) {
		cout<<arr[i]<<endl;
	}
	cout<<endl;
}

int main() {
	int size;
	vector<int> arr;
    
	cout<<"Enter the size of the array:"<<endl;
	cin>>size;
	cout<<"Enter array elements :"<<endl;
	for(int i =0; i<size; i++) {
		int value;
		cin>>value;
		arr.push_back(value);
	}
	cout<<"The unsorted array is :"<<endl;
	printArray(arr, size);
	cout<<"The sorted array is :"<<endl;
	BubbleSort(arr, size);
	printArray(arr, size);
	return 0;
}