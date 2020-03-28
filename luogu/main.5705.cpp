#include <string>
#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;

string s;

int main()
{
	cin>>s;
	int len=s.size();
	for(int i=len-1;i>=0;i--)
	{
		cout<<s[i];
	}
	return 0;
}
