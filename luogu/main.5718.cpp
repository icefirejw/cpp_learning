#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;

int main()
{
	int a[100000],n,sin;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	sin=a[1];
	for(int i=1;i<=n;i++)
	{
		if(a[i]<sin)
		{
			sin=a[i];
		}
	}
	cout<<sin<<endl;
	return 0;
}
