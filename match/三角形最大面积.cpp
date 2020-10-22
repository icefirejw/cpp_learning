#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;
typedef struct
{
    int x;
    int y;
} POS;

POS pos[10005];
int i, j;
bool cmp(POS p1, POS p2)
{
    if (p1.x < p2.x || p1.x == p2.x && p1.y < p2.y)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    int n;

    cin >> n;
    for (i = 0; i < n; i++)
    {
        cin >> pos[i].x >> pos[i].y;
    }
    //sort(pos, pos + n, cmp);
    int s = 0;
    for (i = 0; i < n-1; i++)
    {
        int x = 0;
        int y = 0;
        bool fdx = false;
        bool fdy = false;
        for (j = 0; j < n; j++)
        {
            if (pos[i].x == pos[j].x)
            {
                int tmpy = abs(pos[j].y - pos[i].y);
                fdx = true;

                if (y < tmpy)
                {
                    y = tmpy;
                }
                //cout << "(" << pos[i].x <<" " << pos[i].y<<"),(" << pos[j].x<<" "<<pos[j].y<<") y: "<<y<<endl;
            }
            if (pos[i].y == pos[j].y)
            {
                fdy = true;
                int tmpx = abs(pos[j].x - pos[i].x);

                if (x < tmpx)
                {
                    x = tmpx;
                }
                //cout << "(" << pos[i].x <<" " << pos[i].y<<"),(" << pos[j].x<<" "<<pos[j].y<<") x: "<<x<<endl;
            }
        }

        if (fdy && fdx)
        {
            int tmps = x * y;
             
            if (s < tmps)
            {
                s = tmps;
            }
        }
    }
    cout << s <<endl;
    return 0;
}