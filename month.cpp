// wap to that accept an integer to represent month number and display it
#include <iostream>
using namespace std;
int lap(int n);
int main()
{
    int n, month = 0;
    cout << "Enter the value of n:" << endl;
    cin >> n;
    month = lap(n);
    if (month == 1)
        cout << "January:" << endl;
    if (month == 2)
        cout << "February:" << endl;
    if (month == 3)
        cout << "March:" << endl;
    if (month == 4)
        cout << "April:" << endl;
    if (month == 5)
        cout << "May:" << endl;
    if (month == 6)
        cout << "June:" << endl;
    if (month == 7)
        cout << "July:" << endl;
    if (month == 8)
        cout << "August:" << endl;
    if (month == 9)
        cout << "September:" << endl;
    if (month == 10)
        cout << "October:" << endl;
    if (month == 11)
        cout << "November:" << endl;
    if (month == 12)
        cout << "December:" << endl;
    return 0;
}
int lap(int n)
{
    if (n == 0)
        cout << "There is no month start from 0:" << endl;
    if (n > 12)
        cout << "A month can not be more than 12:" << endl;
}