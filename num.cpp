// wap to find a number is even or odd,reverse number and armstrong number
#include <iostream>
using namespace std;
int eve(int n);
int reverse(int x);
int arms(int y);
int main()
{
    int num;
    cout << "Enter a number:" << endl;
    cin >> num;
    if (eve(num))
        cout << "Number is even:" << endl;
    else
        cout << "Number is odd:" << endl;
    int rev = reverse(num);
    cout << "The reverse number is :" << rev << endl;

    int arm = arms(num);
}
int eve(int n)
{
    if (n % 2 == 0)
        return 1;
    else
        return 0;
}
int reverse(int x)
{
    int rem;
    int sum = 0;
    while (x != 0)
    {
        rem = x % 10;
        sum = sum * 10 + rem;
        x = x / 10;
    }
    return sum;
}
int arms(int y)
{
    int rev = 0;
    int temp, flag;
    flag = y;
    while (y != 0)
    {
        temp = y % 10;
        rev = rev + temp * temp * temp;
        y = y / 10;
    }
    if (rev == flag)
        cout << "Armstrong number:" << flag << endl;
    else
        cout << "Not Armstrong number:" << flag << endl;
    return rev;
}