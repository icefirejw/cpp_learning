#include <iostream>

using namespace std;
int x[100],y[100];

int deal(int x,int y)
{
	int x0,x1,x2,y0,y1,y2,jw=0,ans=0;
	
	x0=x%10;
	x1=(x/10)%10;
	x2=x/100;
	y0=y%10;
	y1=(y/10)%10;
	y2=y/100;
	if(x0+y0>9)
	{		
		ans++;
	}
	jw=(x0+y0)/10;

	if(x1+y1+jw>9)
	{
		ans++;
	}
	jw = (x1+y1+jw)/10;

	if(x2+y2+jw>9)
	{
		ans++;
	}
	return ans;
}

int main()
{
	int i = 0;
	int cnt = 0;
	cin >> x[i] >> y[i];
	
	while(x[i]!=0 || y[i]!=0) {
		i++;
		cin >> x[i] >> y[i];		
	}
	
	for (int j=0; j<i; j++){
		cout<<deal(x[j],y[j])<<endl;
	}

	return 0;
}