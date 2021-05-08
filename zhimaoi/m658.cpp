#include <iostream>

using namespace std;

// 按照3份拆分法，m,m, n-2m，当n-2m > m 需要先称2m，
// 一直拆分到最后一次，剩下m,m,x，其中x>m,那么n-2m*(t-1) = 2m + x
// 最后只需要对x按照3等份拆分即可
//  假设x最小为m+1，那么n-2m(t-1) >= 2m + m + 1
//  解不等式得到：t 为 (n-3m-1)/2m + 1
int main()
{
    long long n, m, t;
    long long sum;

    sum = 0;
    cin >> n >> m;
    if (n - 2 * m > m)
    {
        t = (n - 3 * m - 1) / (2 * m) + 1;

        n -= 2 * m * t;
        sum = t;
    }
    int i = 1;
    while (i < n)
    {
        i = i * 3;
        sum++;
    }
    cout << sum << endl;
}