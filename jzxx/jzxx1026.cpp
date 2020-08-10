#include <iostream>

using namespace std;

int main()
{
    int n, cnt = 0;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        if (i % 3 == 2 && i % 5 == 3 && i % 7 == 2)
        {
            cnt++;
        }
    }
    cout << cnt << endl;

    return 0;
}