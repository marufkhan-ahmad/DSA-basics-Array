// wap to display call by value
#include<iostream>
using namespace std;
int func(int n);
int main()
{
    int num;
    cout<<"Enter num:"<<endl;
    cin>>num;
    cout<<"The value of num before calling the function:"<<num<<endl;
    num = func(num);
    cout<<"The value of num after calling the function:"<<num<<endl;
}
int func(int n)
{
    n = n + 10;
    cout<<"The value of num in the called function:"<<n<<endl;
    return n;
}