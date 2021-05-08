#include <iostream>

using namespace std;

long long n, m, s0, t1, t2, p1, p2;

int main()
{
    cin >> n >> m;

    if (n <= 1)
    {
        cout << "0" << endl;
        return 0;
    }

    if (n <= 3)
    {
        cout << "1" << endl;
        return 0;
    }
    if (m>=3)
    {
        s0 = 1;
        while (s0<m && s0<=n/3)
        {
            s0 = s0*3;
        }
    }
    else
    {
        s0 = m;
    }

    t1 = n/s0;
    if (n%s0 != 0)
        t1++;

    p1 = t1 / 2;
    p2 = s0;
    while (p2 / 3 != 0)
    {
        //cout <<"1"<<endl;
        p1++;
        p2 = p2 / 3;
    }
    if (s0%3!=0)
        p1++;
    cout << p1 << endl;

    return 0;
}