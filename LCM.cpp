#include<iostream>
using namespace std;
long long gcd(long long a, long long b)
{
    if(b==0)
    return a;
    return gcd(b,a%b);
}
long long lcm(int a, int b)
{
    return (a/gcd(a,b))*b;
}
int main()
{
    int a, b;
    cout<<"Enter the value of a and b:"<<endl;
    cin>>a>>b;
    cout<<"The LCM of a and b is:"<<lcm(a,b)<<endl;
    return 0;
}