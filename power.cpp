#include <iostream>
#include <math.h>
using namespace std;
double power(double a, int n);
int main()
{
    double a;
    int n;
    cout << "Enter base:" << endl;
    cin >> a;
    cout << "Enter exponent:" << endl;
    cin >> n;
    cout << "Raised power is: "
         << " " << power(a, n) << endl;
    return 0;
}
double power(double a, int n)
{
    double p = 1;
    if (n == 0)
        return 1;
    else
    {
        for (int i = 1; i <= fabs(n); i++)
            p = p * a;
        if (n > 0)
            return p;
        else
            return 1 / p;
    }
}