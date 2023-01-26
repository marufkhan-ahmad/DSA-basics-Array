// wap of call by value
#include<iostream>
using namespace std;
void fun(int n);
int main()
{
    int num=10;
    cout<<"The value of num before calling the function:"<<num<<endl;
    fun(num);
    cout<<"The value of num after calling the function:"<<num<<endl;
}
void fun(int n)
{
    n = n + 10;
    // value is getting copied
    cout<<"The value of num in the called function:"<<n<<endl;
}