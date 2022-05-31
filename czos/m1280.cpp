#include <cstdio>
#include <iostream>

using namespace std;

int a[50] = {1};
int i, j, s = 0;
int k = 1;
int main()
{
    int n;

    cin >> n;

    for (i = 1; i <= n; i++)
    {
        for (j = 0; j < k; j++)
        {
            //cout <<a[j];
            a[j] = a[j] * 2;
        }
        for (j = 0; j < k + 1; j++)
        {
            if (a[j] >= 10)
            {
                a[j + 1] = a[j + 1] + a[j] / 10;
                a[j] = a[j] % 10;
            }
        }
        if (a[k] > 0)
        {
            k++;
        }
        //cout <<endl;
    }
    //cout <<k<<endl;
   
    for (i=k-1;i>=0;i--)
    {
        cout << a[i];
    }
   
    return 0;
}