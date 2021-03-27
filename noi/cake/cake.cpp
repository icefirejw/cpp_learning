
#include <algorithm>
#include <cstdio>
#include <cstdlib>
#include <iostream>

using namespace std;

int main()
{
    int a, b, c, n;

    freopen("cake.in", "r", stdin);
    freopen("cake.out", "w", stdout);

    //main program
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> a >> b >> c;
        // 两个或以上为0
        if ((a == 0 && b == 0) || (b == 0 && c == 0) || (c == 0 && a == 0))
        {
            cout << "0" << endl;
        }
        //有一个为0
        else if (a == 0 || b == 0 || c == 0)
        {
            //cout << "1" <<endl;
            if (a == 0)
            {
                if (b == c)
                {
                    cout << "1" << endl;
                }
                else
                {
                    cout << "2" << endl;
                }
            }
            if (b == 0)
            {
                if (a == c)
                {
                    cout << "1" << endl;
                }
                else
                {
                    cout << "2" << endl;
                }
            }
            if (c == 0)
            {
                if (a == b)
                {
                    cout << "1" << endl;
                }
                else
                {
                    cout << "2" << endl;
                }
            }
        }
        //都不为0
        else
        {
            if (a == b || b == c || a == c)
            {
                cout << "2" << endl;
            }
            else
            {
                int t;
                if (a > b)
                {
                    t = b;
                    b = a;
                    a = t;
                }
                if (a > c)
                {
                    t = c;
                    c = a;
                    a = t;
                }
                if (b > c)
                {
                    t = c;
                    c = b;
                    b = t;
                }
                if ((a + b) % c == 0 || c % (a + b) == 0)
                {
                    cout << "2" << endl;
                }
                else
                {
                    cout << "3" << endl;
                }
            }
        }
    }

    fclose(stdin);
    fclose(stdout);

    return 0;
}