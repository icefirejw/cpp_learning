#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;

int main(int argc, char** argv) {
	int a,b,c,d;
	cin>>a>>b>>c>>d;
	if(abs(a-c)>abs(b-d))
	{
		cout<<abs(a-c)<<endl;
	}
	else
	{
		cout<<abs(b-d)<<endl;
	}
	return 0;
}
