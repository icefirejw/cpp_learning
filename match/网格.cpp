#include <iostream>
#include <cstdio>

using namespace std;

long long n,k,w1,w2,x[2005],y[2005];

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
			if(x[j]>x[j+1] && y[j]>y[j+1])
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
	if(w1*2<=w2)
	{
		cout<<n*2*w1<<endl;
	}
	else
	{
		long long i=0,j=0;
		long long sum=0;
		for(long long l=1;l<=k;l++)
		{
			if(x[l-1]>=x[l]||y[l-1]>=y[l])
			{
				if (x[l-1]!=0 && y[l-1]!=0)
					continue;
			}
			if(x[l]+1<=n&&y[l]+1<=n)
			{
				sum+=((x[l]+y[l])-(i+j))*w1+w2;
				i=x[l]+1;
				j=y[l]+1;
			}
			//cout<<"i="<<i<<" j="<<j<<endl;
		}
		sum+=((n+n)-(i+j))*w1;
		cout<<sum<<endl;
	}
	return 0;
}
