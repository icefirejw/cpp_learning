#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;

int a[1000];
int b[1000];
int arr[1000];
int t;
int n,k;
int func(int x)
{
    if (x==n+1){
    /*
        return 0;
    }
    
    if (t>=k){
        */
        for (int j=1; j<=n; j++){
            cout << arr[j] << " ";
        }
        cout <<endl;
        //t = 0;
        return 0;
    }
    for (int i=1; i<=n; i++)
    {
        if (b[i]==0){
            arr[x] = a[i];
            b[i]=1;
            func(x+1);
            b[i]=0;
        }
    }
    return 0;
}

int main ()
{
    cin >> n >> k;
    
    for (int i=1; i<=n; i++)
    {
        cin >> a[i];
    }
    func(1);
    return 0;
}