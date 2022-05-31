#include <algorithm>
#include <cstdio>
#include <iostream>

using namespace std;

int a[110] = {1};
int s[110];
int i, j;
int si;
int k = 1;
int p = 1;
int main()
{
    int n;

    cin >> n;

    for (i = 1; i <= n; i++)
    {
        for (j = 0; j < k; j++)
        {
            //cout <<a[j];
            a[j] = a[j] * 2;
        }
        for (j = 0; j < k + 1; j++)
        {
            if (a[j] >= 10)
            {
                a[j + 1] = a[j + 1] + a[j] / 10;
                a[j] = a[j] % 10;
            }
        }
        if (a[k] > 0)
        {
            k++;
        }
        p = max(p, k);
        for (si = 0; si < p; si++)
        {
            s[si] = s[si] + a[si];
            if (s[si] >= 0)
            {
                s[si + 1] = s[si + 1] + s[si] / 10;
                s[si] = s[si] % 10;
            }
        }
        if (s[p] > 0)
        {
            p++;
        }
    }
    //cout <<k<<endl;

    for (i = p - 1; i >= 0; i--)
    {
        cout << s[i];
    }

    return 0;
}