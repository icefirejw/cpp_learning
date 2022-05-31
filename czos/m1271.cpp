#include <cstdio>
#include <cstdlib>
#include <iostream>

using namespace std;

int a, b;
int n;
int k;

int main()
{
    cin >> a >> b;
    cin >> n;

    cout << a / b << ".";

    k = a % b;
    for (int i = 0; i < n; i++)
    {
        k = k * 10;
        cout << k / b;
        k = k % b;
    }

    return 0;
}