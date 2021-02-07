#include <iostream>

using namespace std;

int a[10005];
int main()
{
    int n,i;

    cin>>n;

    a[1] = 2;

    for (i=2; i<=n; i++)
    {
        a[i] = a[i-1] + 2*(i-1);
    }

    cout << a[n];

    return 0;
}