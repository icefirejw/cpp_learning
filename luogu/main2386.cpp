#include <algorithm>
#include <iostream>

using namespace std;

int func_apple(int m, int n)
{
    if (m == 1 || m == 0 || n == 1)
    {
        return 1;
    }

    if (m < n)
    {
        return func_apple(m, m);
    }
    else
    {
        return func_apple(m, n - 1) + func_apple(m - n, n);
    }
}

int sum[30];
int main()
{
    int m, n, t;

    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        cin >> m >> n;

        sum[i] = func_apple(m, n);
    }

    for (int i = 1; i <= t; i++)
        cout << sum[i] << endl;

    return 0;
}