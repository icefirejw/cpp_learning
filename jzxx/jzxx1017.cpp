#include <iostream>
using namespace std;

int sort(int a[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[i] < a[j])
            {
                int t = a[i];
                a[i] = a[j];
                a[j] = t;
            }
        }
    }
    return 0;
}
int main()
{

    int n;
    int a[5] = {0};

    cin >> n;

    if (n > 999)
        return -1;

    int i = 0;
    while (n > 0)
    {
        a[i] = n % 10;
        n = n / 10;
        ++i;
    }
    sort(a, 3);

    for (i = 0; i < 3; i++)
    {
        cout << a[i];
    }

    return 0;
}