#include <bits/stdc++.h>

using namespace std;

long long n,a,b;

long long gcd(long long x,long long y)
{
    long long z=x;

    while(z!=0)
    {
        z=x%y;
        x=y;
        y=z;
    }
    return x;
}

int main()
{
    freopen("math.in","r",stdin);
    freopen("math.out","w",stdout);
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>a>>b;
        for(int j=1;;j++)
        {
            if(a*j*gcd(a,j)==b)
            {
                cout<<j<<endl;
                break;
            }
            if(a*j>b)
            {
                cout<<"-1"<<endl;
                break;
            }
        }
    }
    fclose(stdin);
    fclose(stdout);
    return 0;
}
