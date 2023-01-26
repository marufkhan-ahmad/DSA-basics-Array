//Wap to find a number is the power of 2 or not
#include <iostream>
using namespace std;
bool power_of_2(int n)
{
    // N = 1000
    // N-1=0111
    int mask = n - 1;
    return !(n & mask);
}
int main()
{
    int n;
    cout << "Enter n:" << endl;
    cin >> n;
    if (power_of_2(n))
    {
        cout << n << " is power of 2:" << endl;
    }
    else
    {
        cout << n << " is not power of 2:" << endl;
    }
    return 0;
}