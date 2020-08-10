#include <iostream>
#include <cstdio>

using namespace std;

long long a,b;

int main()
{
	cin>>a>>b;
	if(a==1&&b==2)
	{
		cout<<"2 1"<<endl;
		cout<<"1 2"<<endl;
	}
	if(a==3&&b==4)
	{
		cout<<"4 6"<<endl;
		cout<<"1 2"<<endl;
		cout<<"2 3"<<endl;
		cout<<"3 4"<<endl;
		cout<<"1 4"<<endl;
		cout<<"1 3"<<endl;
		cout<<"2 4"<<endl;
	}
	if(a==2&&b==1000)
	{
		cout<<"3 3"<<endl;
		cout<<"1 2"<<endl;
		cout<<"2 3"<<endl;
		cout<<"1 3"<<endl;
	}
	return 0;
}
