#include <iostream>

using namespace std;

int gys(int n, int m)
{
    if (n % m == 0)
        return m;
    else 
        return gys(m, n%m);
    
}

int main()
{
    int a, b;
    cin >> a >> b;

    cout << gys(a,b);
}