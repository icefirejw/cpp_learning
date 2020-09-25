#include <iostream>
#include <algorithm>

using namespace std;

int arr_zyz[100];
int sum = 0;
void zyz(int n, int p)
{
    if (n<=1)
        return;
    
    if (n%p == 0){
        sum++;
        arr_zyz[sum] = p;
        zyz(n/p, p);
    }
    else
    {
        zyz(n, p+1);
    }
}

int main()
{
    int n;
    cin>>n;
    zyz(n,2);

    for (int i=1; i<=sum; i++)
    {
        cout << arr_zyz[i] << " ";
    }
}