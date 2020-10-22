#include <iostream>

using namespace std;

bool first=true;

void zyz(int x,int y)
{
	if(x==1) cout<<endl;
	else 
	{
		if(x%y==0)
		{
			x/=y;
			if(first)
			{
				cout<<y;
				first=false;
			}
			else
			{
				cout<<" "<<y;
			}
		}
		else
		{
			y++;
		}
		zyz(x,y);
	}
}

int main(int argc, char** argv)
{
	int n;
	cin>>n;
	zyz(n,2);
	return 0;
}
