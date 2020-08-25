#include <iostream>
#include <cstdio>
#include <algorithm>

using namespace std;

long long n,k,w1,w2,x[2005],y[2005], f[2005];

int main()
{
	long long i,j;
	cin>>n>>k>>w1>>w2;
	x[0]=0;
	y[0]=0;
	for(long long i=1;i<=k;i++)
	{
		cin>>x[i]>>y[i];
	}
	for(i=1;i<=k-1;i++)
	{
		for(j=1;j<=k-i;j++)
		{
			if(x[j]>x[j+1] || ( x[j]==x[i]&&y[j]>y[j+1]))
			{
				long long kx,ky;
				kx=x[j];
				x[j]=x[j+1];
				x[j+1]=kx;
				ky=y[j];
				y[j]=y[j+1];
				y[j+1]=ky;
			}
		}
	}
	k++;
	x[k] = n;
	y[k] = n;
	for (i = 1; i<=k; i++){
		f[i] = (x[i]+y[i])*w1;
	}


	if(w*2<=w2)
	{
		cout<<n*2*w1<<endl;
	}
	else
	{
		for(i=1;i<=k;i++)
		{
			for (j=1; j<i; j++){
				if (x[j]<x[i] && y[j]<y[i]){
					long long sum = y[i]-y[j]+x[i]-x[j]-4;
					f[i] = min(f[i], f[j]+sum*w1+w2);
				}
			}
			//cout << "x="<<x[i]<< " y="<<y[i] << " f=" << f[i]<<endl;
		}
		cout<<f[k]<<endl;
	}
	return 0;
}
