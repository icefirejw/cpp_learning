#include <iostream>

using namespace std;

int main()
{
	long long aa,b,sum=0,cnt=1,bb,cc;
	cin>>aa>>b;
	bb=aa;
	while(bb!=0)
	{
		bb/=10;
		cnt*=10;
	}
	for(long long i=100;i<=999;i++)
	{
		if((i*cnt+aa)%b==0)
		{
			sum++;
		}
	}
	cout<<sum<<endl;
	return 0;
}
