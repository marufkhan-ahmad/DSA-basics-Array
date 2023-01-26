#include<iostream>
using namespace std;
int power(int,int);
void cal(int a,int b,int n)
{
    for (int i = 0; i < n; i++)
    {
        int pp=power(2,i);
        a=a+pp*b;
        cout<<a<<"  ";
    }cout<<endl;
    
}
int power(int a,int b)
{
        int p=1;
    for(int i=0;i<b;i++)
    {
        p=p*a;
    }
        return p;
}
int main()
{
    cal(0,2,10);
  
    return 0;
}