#include <bits/stdc++.h>

using namespace std;

long long n,m,a[1010],b[1010],sum;

int main()
{
    freopen("kingdom.in","r",stdin);
    freopen("kingdom.out","w",stdout);
    cin>>n>>m;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            cin>>a[j];
            if(a[j]==1)
            {
                b[j]++;
            }
            else
            {
                b[j]--;
            }
        }
    }
    for(int i=1;i<=m;i++)
    {
        cin>>a[i];
        if(a[i]==1&&b[i]>0)
        {
            sum++;
        }
        if(a[i]==0&&b[i]<0)
        {
            sum++;
        }
    }
    cout<<sum<<endl;
    fclose(stdin);
    fclose(stdout);
    return 0;
}
