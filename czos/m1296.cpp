#include <cstdio>
#include <iostream>

using namespace std;

int a[1000] = {1};
int c[1000] = {0};
int i, j;
int k = 1;
int p = 1;
int main()
{
    int n;

    cin >> n;

    for (i = 1; i <= n; i++)
    {
        // 逐位相乘
        for (j = 0; j < k; j++)
        {
            //cout <<a[j];
            a[j] = a[j] * i;
        }
        // 按位进位
        for (j = 0; j < k + 3; j++)
        {
            if (a[j] >= 10)
            {
                a[j + 1] = a[j + 1] + a[j] / 10;
                a[j] = a[j] % 10;
            }
        }
        // 有进位，数的总位数要上升，找到第一个非零的位置
        for (j = k + 3; j >= 0; j--)
        {
            if (a[j] > 0)
            {
                k = j + 1;//位数要在非零位置+1；
                break;
            }
        }
        // 阶乘相加
        p = max(p, k);
        for (j = 0; j <= p; j++)
        {
            c[j] = c[j] + a[j];
            if (c[j] >= 10)
            {
                c[j + 1] = c[j + 1] + c[j] / 10;
                c[j] = c[j] % 10;
            }
        }
        if (c[p] > 0)
        {
            p++;
        }
        //cout <<endl;
    }
    //cout << k << endl;

    for (i = p - 1; i >= 0; i--)
    {
        cout << c[i];
    }

    return 0;
}