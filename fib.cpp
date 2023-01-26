#include <iostream>
using namespace std;
void fib(int n)
{
    int a = 0;
    int b = 1;
    cout << a << "\t" << b << "\t";
    for (int i = 2; i <= n; i++)
    {
        int current = a + b;
        a = b;
        b = current;
        cout << current << "\t";
    }
}
int fibb(int n)
{
    if(n==0)
    return 0;
    if(n==1)
    return 1;
    int ans = fibb(n-1) + fibb(n-2);
    return ans;
   // cout<<ans<<" \t";
}
int main()
{
    int n;
    cout << "Enter n:" << endl;
    cin >> n;
    cout << "Fibb is :"  << endl;
    // fib(n);
  cout<<  fibb(n);
    return 0;
}
