#include <iostream>

using namespace std;

char a[100000];
int i=0;

void s_sl(int x)
{
	while(x!=0)
	{
		int t=x%16;
		if(t<10)
		{
			a[i]=char(t+'0');
		}
		else
		{
			a[i]=char(t+'A'-10);
		}
		i++;
		x/=16;
	}
}

int main(int argc, char** argv)
{
	int n;
	cin>>n;
	s_sl(n);
	for(int j=i-1;j>=0;j--)
	{
		cout<<a[j];
	}
	cout<<endl;
	return 0;
}
