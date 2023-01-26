#include<iostream>
using namespace std;
 int binary( int n);
int main(){
    int n;
    cout<<"Enter the  value of n:"<<endl;
    cin>>n;
    cout<<"decimal to binary is  :"<<n<<"  "<<binary(n)<<endl;
    return 0;
}
 int binary( int n)
{
     int a =1, bin = 0, rem;
   while(n>0)
   {
    rem = n % 2;
    bin = bin + rem * a;
    n = n / 2;
    a = a * 10;
   }
   return bin;
    
}