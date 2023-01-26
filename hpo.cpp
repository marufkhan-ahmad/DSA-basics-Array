#include<iostream>
using namespace std;
int add(int a, int b);
int main()
{
    int a,  b, sum=0;
    cout<<"Enter the value of a and b:"<<endl;
    cin>>a>>b;
    sum = add(a,b);
    cout<<"Sum is :"<<sum<<endl;
}
int add(int a, int b)
{
    int result;
    result = a + b;
    return result;
}
