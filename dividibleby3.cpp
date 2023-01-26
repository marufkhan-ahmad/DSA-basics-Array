// write a program to find a number is dividible by 3 or not
#include<bits/stdc++.h>
using namespace std;
int divisibleby3(int num)
{
    // to compute the sum
    int digitsum = 0;
    while(num>0)
    {
        int rem = num % 10;
        digitsum = digitsum + rem;
        num = num / 10;
    }
    return (digitsum % 3 == 0);
}
int main()
{
    int n;
    cout<<"Enter a number :"<< endl;
    cin>>n;
    if(divisibleby3(n))
    cout<<"Number is divisible by 3 :"<<endl;
    else
    cout<<"Number is not divisible by 3 :"<<endl;
    return 0;
}