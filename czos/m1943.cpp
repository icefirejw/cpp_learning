#include <cmath>
#include <iostream>
using namespace std;

int a1[4] = {2, 3, 5, 7};
int a2[4] = {1, 3, 7, 9};
int n;
bool ss(int num)
{
    if (num == 2)
        return true;
    for (int i = 2; i < sqrt((double)num) + 1; i++)
    {
        if (num % i == 0)
        {
            return false;
        }
    }
    return true;
}
void process(int num, int len)
{
    if (!ss(num))
    {
        return;
    }
    if (len == n)
    {
        cout << num << endl;
        return;
    }
    for (int i = 0; i < 4; i++)
    {
        process(num * 10 + a2[i], len + 1);
    }
}

int main()
{
    cin >> n;

    for (int i = 0; i < 4; i++)
    {
        process(a1[i], 1);
    }

    return 0;
}