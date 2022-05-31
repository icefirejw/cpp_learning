#include <algorithm>
#include <iostream>

using namespace std;

int G_INT_MAX = 0x3f3f3f3f;
int a[40][40], b[40][40];
int fx[5] = {0, 0, 1, 0, -1}, fy[5] = {0, 1, 0, -1, 0};
int i, j, n, m;

void process(int x, int y, int v)
{
    b[x][y] = min(b[x][y], v);

    if (x == n && y == m)
        return;

    // cout << x << " " << y << " " << v << endl;
    // f[x][y] = true;
    for (int k = 1; k <= 4; k++)
    {
        int nextx = x + fx[k];
        int nexty = y + fy[k];
        int value = b[x][y] + a[nextx][nexty];
        if (b[nextx][nexty] > value && nextx <= n && nexty <= m && nextx > 0 && nexty > 0)
        {
            process(nextx, nexty, value);
        }
    }
    // f[x][y] = false;
}

int main()
{
    cin >> n >> m;
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= m; j++)
        {
            cin >> a[i][j];
            b[i][j] = G_INT_MAX;
        }
    }

    process(1, 1, a[1][1]);
    /*
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= m; j++)
        {
            cout << b[i][j] << " ";
        }
        cout << endl;
    }
    */
    cout << b[n][m] << endl;
    return 0;
}