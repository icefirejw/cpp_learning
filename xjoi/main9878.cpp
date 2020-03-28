#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;

int main(int argc, char** argv) {
	int a,b,c,d,e,f,max;
	cin>>a>>b>>c>>d>>e>>f;
	max=b;
	if(c>max)
	{
		max=c;
	}
	if(d>max)
	{
		max=d;
	}
	if(e>max)
	{
		max=e;
	}
	if(f>max)
	{
		max=f;
	}
	cout<<max-a+1<<endl;
	return 0;
}
