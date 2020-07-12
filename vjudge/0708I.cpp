#include <iostream>

using namespace std;

int main() 
{
	int s,n;
	cin>>n>>s;
	for(int i=1;i<=s;i++)
	{
		if(n%10==0)
		{
			n/=10;
		}
		else
		{
			n-=1;
		}
	}
	cout<<n<<endl;
	return 0;
}