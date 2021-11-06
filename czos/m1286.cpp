#include <algorithm>
#include <cstdio>
#include <cstdlib>
#include <iostream>

using namespace std;
string s1;
int a[250], b;
int c[260];
int i, p;
int main()
{
    cin >> s1;
    cin >> b;

    //逆序输入数组
    for (i = 0; i < (int)s1.size(); i++)
    {
        a[i] = s1[s1.size() - i - 1] - '0';
        //cout<<a[i];
    }
    //每位相乘
    for (i = 0; i < (int)s1.size(); i++)
    {
        c[i] = a[i] * b;
    }
    //处理进位
    for (i = 0; i < 260; i++)
    {
        if (c[i] >= 10)
        {
            c[i + 1] = c[i + 1] + c[i] / 10;
            c[i] = c[i] % 10;
        }
    }
    // 找首位
    for (i = 259; i >= 0; i--)
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