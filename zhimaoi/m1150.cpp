#include <algorithm>
#include <cstdio>
#include <iostream>

using namespace std;

typedef struct
{
    int x;
    int y;
} RECT_S;

RECT_S rect[1000005];
int m, n, k;
int i, j;

int main()
{
    cin >> m >> n >> k;

    int t;
    for (t = 1; t <= k; t++)
    {
        cin >> i >> j;
        rect[t].x = i;
        rect[t].y = j;
    }

    int sum = 0;
    int a, b;
    for (a = 1; a <= k; a++)
    {
        for (b = a + 1; b <= k; b++)
        {
            if (a < b)
            {
                if ((rect[a].x == rect[b].x && rect[a].x == 1) || (rect[a].y == rect[b].y && rect[a].y == 1))
                {
                    continue;
                }
                sum++;
                //cout << "(" << rect[a].x << "," << rect[a].y << ") "
                //     << "(" << rect[b].x << "," << rect[b].y << ") "
                //     << "(1,1)" << endl;
            }
        }
    }
    cout << sum << endl;
    return 0;
}