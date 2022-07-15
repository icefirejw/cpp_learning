#include <iostream>
using namespace std;
unsigned long long l, r, k, sum, cnt, first;

int main()
{
    cin >> l >> r >> k;
    sum = 0;
    //找到第一个倍数
    if (l % k == 0)
    {
        first = l;
    }
    else
    {
        first = l + (k - l % k);
    }
    //如果找到的倍数刚好在输入的两个数的范围内
    if (first <= r)
    {
        sum = sum + 1;
        cnt = (r - first) / k; //这里的计数要先去掉找到的那个倍数
        sum = sum + cnt;
    }
    cout << sum << endl;
    return 0;
}