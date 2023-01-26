#include <iostream>
using namespace std;
int add(int a, int b);
int sub(int c, int d);
int mul(int x, int y);
int divi(int p, int q);
int main()
{
    int n, n1;
    cout << "Enter the value of n and n1:" << endl;
    cin >> n >> n1;
    int sum = add(n, n1);
    cout << "Sum is :" << sum << endl;
    int diff = sub(n, n1);
    cout << "Diff is :" << diff << endl;
    int mult = mul(n, n1);
    cout << "Mul is :" << mult << endl;
    int divide = divi(n, n1);
    cout << "Divide is:" << divide << endl;
}
int add(int a, int b)
{
    int res;
    res = a + b;
    return res;
}
int sub(int c, int d)
{
    int resul = c - d;
    return resul;
}
int mul(int x, int y)
{
    int result = x * y;
    return result;
}
int divi(int p, int q)
{
    int test = p / q;
    return test;
}