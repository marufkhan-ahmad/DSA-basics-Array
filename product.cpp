#include <iostream>
using namespace std;
int product(int num);
int main()
{
    int num;
    cout << "Enter a number:" << endl;
    cin >> num;
    cout << "Product of the number is :" << product(num) << endl;
    return 0;
}
int product(int num)
{
    int rem, prod = 1;
    for (int i = 1; num; i++)
    {
        rem = num % 10;
        prod = prod * rem;
        num = num / 10;
    }
    return prod;
}