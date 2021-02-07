#include <bits/stdc++.h>

using namespace std;

int i;

string he(string s1,string s2)
{
	string r;
	int a[1000]={0},b[1000]={0},c[1000]={0};
	for(i=0;i<s1.size();i++)
	{
		a[i]=s1[s1.size()-i-1]-'0';
	}
	for(i=0;i<s2.size();i++)
	{
		b[i]=s2[s2.size()-i-1]-'0';
	}
	int len=max(s1.size(),s2.size());
	for(i=0;i<len;i++)
	{
		c[i]=c[i]+a[i]+b[i];
		if(c[i]>=10)
		{
			c[i+1]=c[i+1]+c[i]/10;
			c[i]=c[i]%10;
		}
	}
	if(c[len]!=0)
	{
		len++;
	}
	for(i=len-1;i>=0;i--)
	{
		r=r+(char)(c[i]+'0');
	}
	return r;
}

string ji(string s)
{
	string r;
	int a[2000]={0};
	for(i=0;i<s.size();i++)
	{
		a[i]=s[s.size()-i-1]-'0';
	}
	for(i=0;i<s.size();i++)
	{
		a[i]=a[i]*2;
	}
	for(i=0;i<s.size();i++)
	{
		a[i+1]=a[i+1]+a[i]/10;
		a[i]=a[i]%10;
	}
	int len=s.size();
	if(a[len]!=0)
	{
		len++;
	}
	for(i=len-1;i>=0;i--)
	{
		r=r+to_string(a[i]);
	}
	return r;
}
int main()
{
	int n;
	string a,b,c;
	cin>>n;
	a="1";
	b="2";
	if(n<=2)
	{
		cout<<n<<endl;
	}
	else
	{
		for(i=3;i<=n;i++)
		{
			c=he(ji(b),a);
			a=b;
			b=c;
		}
		cout<<c<<endl;
	}
	return 0;
}
