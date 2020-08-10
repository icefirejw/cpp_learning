#include <iostream>

using namespace std;
int a[100];
int main()
{
    int max = 0;
    int min = 32767;
    int n;

    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    for (int i = 0; i < n; i++)
    {
        if (max < a[i])
        {
            max = a[i];
        }
        if (min > a[i])
        {
            min = a[i];
        }
    }

    cout << max << " " << min << endl;
    return 0;
}