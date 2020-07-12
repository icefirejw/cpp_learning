#include <iostream>

using namespace std;
long long n,a,b,k;
long long deal(long long a,long long b,long long k){
	long long cha=a-b;
	if(k%2==0) return cha*(k/2);
	else return cha*(k/2)+a;
}
int main()
{
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a>>b>>k;
		cout<<deal(a,b,k)<<endl;
	}
	return 0;
}
