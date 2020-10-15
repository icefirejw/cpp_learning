#include <iostream>

using namespace std;

void zdgys(int a,int b)
{
	int bc,c,y;
	bc=a;
	c=b;
	y=a%b;
	while(y!=0)
	{
		bc=c;
		c=y;
		y=bc%c;
	}
	cout<<c<<endl;
}

int main(int argc, char** argv)
{
	int m,n;
	cin>>m>>n;
	zdgys(m,n);
	return 0;
}
