#include <algorithm>
#include <cstdio>
#include <cstdlib>
#include <iostream>

using namespace std;

string s1, s2;
int a[250], b[250], c[500];
int i, j, p;

int main()
{
    cin >> s1 >> s2;

    for (i = 0; i < (int)s1.size(); i++)
    {
        a[i] = s1[s1.size() - i - 1] - '0';
    }
    for (i = 0; i < (int)s2.size(); i++)
    {
        b[i] = s2[s2.size() - i - 1] - '0';
    }

    // 逐位相乘
    for (i = 0; i < (int)s1.size(); i++)
    {
        for (j = 0; j < (int)s2.size(); j++)
        {
            c[i + j] = c[i + j] + a[i] * b[j];
            if (c[i + j] >= 10)
            {
                c[i + j + 1] = c[i + j + 1] + c[i + j] / 10;
                c[i + j] = c[i + j] % 10;
            }
        }
    }
    // 找第一位非零
    for (i = s1.size() + s2.size(); i >= 0; i--)
    {
        if (c[i] != 0)
        {
            p = i;
            break;
        }
    }
    for (i = p; i >= 0; i--)
    {
        cout << c[i];
    }
    return 0;
}