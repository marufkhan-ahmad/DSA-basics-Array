#include<iostream>
using namespace std;
int oct(int n, int base);
int main()
{
    int base, result, num;
    char choice;
    cout<<"Enter 'o' for octal and 'b' for binary:"<<endl;
    cin>>choice;
    cout<<"Enter a number: "<<endl;
    cin>>num;
    base = (choice=='b')? 2 : 8;
    result = oct(base, num);
    cout<<"Decimal number is :"<<result<<endl;
    return 0;
}
int oct(int n, int base)
{
    int rem, dec = 0,  j = 1;
    while (n>0)
    {
        /* code */
        rem = n % 10;
        dec = dec + rem * j;
        j = j * base;
        n = n / 10;
    }
    return dec;
    
}