#include <iostream>

using namespace std;

int a[1010][1010], b[1010], s[1010];
int n, m;
int sum = 0;
int main()
{
    int i, j;
    cin >> n >> m;

    for (i = 1; i <= m; i++)
    {
        for (j = 1; j <= n; j++)
        {
            cin >> a[i][j];
        }
    }
    for (i = 1; i <= n; i++)
    {
        cin >> s[i];
    }
    for (j = 1; j <= n; j++)
    {
        for (i = 1; i <= m; i++)
        {
            if (a[i][j] == 1)
            {
                b[j]++;
            }
        }
        if ((b[j] > m - b[j] && s[j] == 1) || (b[j] < m - b[j] && s[j] == 0))
        {
            sum++;
        }
    }

    cout << sum << endl;
    return 0;
}