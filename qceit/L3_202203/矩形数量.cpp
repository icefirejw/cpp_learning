#include <algorithm>
#include <iostream>

using namespace std;

int xx[110], yy[110];

bool isRect(int a, int b, int c, int d)
{
    bool flag = false;
    if (a == b || b == c || c == d || a == c || a == d || b == d)
    {
        return false;
    }
    int x_ab = xx[a] - xx[b];
    int y_ab = yy[a] - yy[b];
    int x_ac = xx[a] - xx[c];
    int y_ac = yy[a] - yy[c];
    int x_ad = xx[a] - xx[d];
    int y_ad = yy[a] - yy[d];
    int x_bc = xx[b] - xx[c];
    int y_bc = yy[b] - yy[c];
    int x_bd = xx[b] - xx[d];
    int y_bd = yy[b] - yy[d];
    int x_cd = xx[c] - xx[d];
    int y_cd = yy[c] - yy[d];

    long long ab2 = x_ab * x_ab + y_ab * y_ab;
    long long ac2 = x_ac * x_ac + y_ac * y_ac;
    long long ad2 = x_ad * x_ad + y_ad * y_ad;
    long long bc2 = x_bc * x_bc + y_bc * y_bc;
    long long bd2 = x_bd * x_bd + y_bd * y_bd;
    long long cd2 = x_cd * x_cd + y_cd * y_cd;

    if (ab2 + ac2 == bc2 && ac2 + cd2 == ad2 && ab2 + bd2 == ad2 && bd2 + cd2 == bc2)
    {
        flag = true;
    }

    if (ac2 + ad2 == cd2 && ad2 + bd2 == ab2 && bd2 + bc2 == cd2 && ac2 + bc2 == ab2)
    {
        flag = true;
    }

    if (ab2 + bc2 == ac2 && ab2 + cd2 == bd2 && cd2 + ad2 == ac2 && ad2 + ab2 == bd2)
    {
        flag = true;
    }

    return flag;
}
int main()
{
    int m, n;
    int i, j;

    cin >> m;
    /*
    pt = new bool* [1000000010];
    *pt = new bool[1000000010];
    for (int k = 0; k < 100000010; k++)
    {
        for (int l = 0; l < 100000010; l++)
        {
            pt[k][l] = false;
        }
    }
    */
    for (i = 1; i <= m; i++)
    {
        cin >> n;
        for (j = 1; j <= n;)
        {
            int tx, ty;
            cin >> tx >> ty;

            bool isExist = false;
            for (int k = 1; k <= j; k++)
            {
                if (j > 1 && xx[k] == tx && yy[k] == ty)
                {
                    isExist = true;
                    break;
                }
            }
            if (isExist)
            {
                //cout << "####" << endl;
                n--;
            }
            else
            {
                xx[j] = tx;
                yy[j] = ty;
                j++;
            }
        }
        int a, b, c, d;
        int sum = 0;
        for (a = 1; a <= n - 3; a++)
        {
            for (b = a + 1; b <= n - 2; b++)
            {
                for (c = b + 1; c <= n - 1; c++)
                {
                    for (d = c + 1; d <= n; d++)
                    {
                        if (isRect(a, b, c, d))
                        {
                            sum++;
                            //cout << a << " " << b << " " << c << " " << d << " " << sum << endl;
                        }
                    }
                }
            }
        }
        cout << sum;
    }
    return 0;
}