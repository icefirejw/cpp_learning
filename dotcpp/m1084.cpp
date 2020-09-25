#include <iostream>
#include <cmath>
#include <algorithm>
#include <cstdio>

using namespace std;

int arr[100000];

int main()
{
    int n,i;

    cin >> n;

    for (i = 2; i<=n; i++)
    {
        arr[i] = i;
    }

    for (i = 2; i<=n; i++)
    {
        if (arr[i]!=0){
            int tmp = arr[i];
            for (int j = 2*tmp; j<=n; j = j+tmp)
            {
                arr[j] = 0;
            }
            cout << arr[i]<<endl;
        }
    }
    return 0;
}