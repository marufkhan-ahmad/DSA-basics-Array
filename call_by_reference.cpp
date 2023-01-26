// wap to display call by reference
#include <iostream>
using namespace std;
void fun(int &n);
int main()
{
    int num;
    cout << "Enter the value of num:" << endl;
    cin >> num;
    cout << "The value of num before calling :" << num << endl;
    fun(num);
    cout << "The value of num after calling :" << num << endl;

}
void fun(int &n)
{
    n = n + 10;
    cout << "The value of num in the call function:" << n << endl;
}
