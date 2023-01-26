// write a program to reverse a string using stl
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    cout<<"Enter the string :"<<endl;
    cin >> str;
    reverse(str.begin(), str.end());
    cout << str << endl;
    return 0;
}