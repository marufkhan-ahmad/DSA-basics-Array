// wap to find the factorial and sum of n numbers
#include<iostream>
using namespace std;
int fact(int n);
int avg(int  x);
int main()
{
    int num;
    cout<<"Enter number:"<<endl;
    cin>>num;
    int fac = fact(num);
    cout<<"Factorial is :"<<fac<<endl;
    int averg = avg(num);
    cout<<"Average is:"<<averg<<endl;
}
int fact(int n)
{
    int rem =1;
    for(int i = 1;i<=n; i++)
    {
        rem = rem * i;
    }
    return rem;
}
int  avg(int x)
{
  int rev =0;
  for(int i = 1; i<=x; i++)
  {
    rev = rev + i;
  }
  return rev;
}