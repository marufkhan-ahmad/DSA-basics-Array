#include <iostream>
#include <math.h>
using namespace std;
int is_Prime(int n);
int main()
{
    int n;
    cout << "Enter n:" << endl;
    cin >> n;
    if (is_Prime(n))
        cout << "it is prime:" <<1<< endl;
    else
        cout << "it is not prime:" <<0<< endl;
}
int is_Prime(int n)
{
    
    for (int i = 2; i <= sqrt(n); i++)

        if (n % i != 0)
            return 1;
        else
            return 0;
}