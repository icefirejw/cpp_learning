#include <algorithm>
#include <iostream>

using namespace std;

long long n, m, i;
long long a[1000005], s[1000005];
long long sum = 1e15;
int main()
{
    cin >> n >> m;
    s[0] = 0;
    a[0] = 0;
    for (i = 1; i <=n - 1; i++)
    {
        cin >> a[i];
        s[i] = s[i - 1] + a[i];
        //cout << s[i] << ",";
    }
    cout <<endl;
    for (i = 1; i <= n - m; i++)
    {
        long long t = s[i - 1 + m] - s[i - 1];
        //cout << "i=" << i <<", sum=" << sum << ", islands=" << t << endl;
        sum = min(sum, t);
    }

    cout << sum << endl;
}