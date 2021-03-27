//#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>

using namespace std;

int i,j,m,n,a[110][110],b[110][110],c[210],s=0;

int main()
{
    cin>>m>>n;
    for(i=1;i<=m;i++)
    {
        for(j=1;j<=n;j++)
        {
            cin>>a[i][j];
            b[i][j]=a[i][j];
        }
    }
    if (m==1&&n==1)
    {
        cout<<a[m][n]<<endl;
        return 0;
    } 
    for(i=1;i<=m;i++)
    {
        for(j=1;j<=n;j++)
        {
            a[i][j]=a[i][j]+max(a[i-1][j],a[i][j-1]);
        }
    }

    //cout<<a[m][n]<<endl;
    
    i = m;
    j = n; 
    s=0;
    while(i>=1&&j>=1)
    {
        s++;
        c[s]=b[i][j];
        
        if(a[i-1][j]>a[i][j-1])
        {
            i--;
        }
        else
        {
            j--;
        }
    }
    for(i=s;i>=1;i--)
    {
        if(i!=s)
        {
            cout<<"-";
        }
        cout<<c[i];
    }
    cout<<endl;
    
    return 0;    
}