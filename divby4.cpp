// write a program to find a number
// which is divisible by 4 or not
#include <bits/stdc++.h>
using namespace std;
bool check(string str)
{
    int n = str.length();
    // Empty string
    if (n == 0)
        return false;

    // if there is single digit
    if (n == 1)
        return ((str[0] - '0') % 4 == 0);
    // last two digits
    int last = str[n - 1] - '0';
    int seclast = str[n - 2] - '0';
    return ((seclast * 10 + last) % 4 == 0);
}

int main()
{
    string str;
    cout << "Enter the string :" << endl;
    cin >> str;
    // function call
    check(str) ? cout << "Number is divisible by 4 :" : cout << "Number is not divisible by 4 :" << endl;
    return 0;
}