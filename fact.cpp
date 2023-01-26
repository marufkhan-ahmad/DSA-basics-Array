#include<iostream>
using namespace std;
long fact(int);
long perm(int, int);
long comb(int, int);
int main()
{
    int n, r;
    cout<<"Enter n and r:"<<endl;
    cin>>n>>r;
    cout<<"Total combinations are:"<<comb(n,r)<<endl;
    cout<<"Total permutations are:"<<perm(n,r)<<endl;
    return 0;
}

long comb(int n, int r)
{
    long p;
    p = fact(n)/ fact(r)*fact(n - r);
    return p;
}
long perm(int n, int r)
{
    long c;
    c = perm(n,r) / fact(r);
    return c;
}
long int fact(int n)
{
    int i;
    long int fact = 1;
    if(n==0)
    return 1;
    for(i = n; i>1; i--)
    fact = fact * i;
    return fact;
}