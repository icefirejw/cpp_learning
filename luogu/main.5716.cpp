#include<bits/stdc++.h>
using namespace std;
int a,b;
int main() {
    cin>>a>>b;
    if(b==1||b==3||b==5||b==7||b==8||b==10||b==12)
	{
		cout<<"31"<<endl;
	}
	else if(b==2)
	{
		if(a%400==0)
		{
			cout<<"29"<<endl;
		} 
    	else if(a%10==0&&a/10%10==0&&a%400==0) 
		{
			cout<<"29"<<endl;
		}
	    else if(a%10!=0&&a%4==0||a/10%10!=0&&a%4==0)
	    {
	    	cout<<"29"<<endl;
		}
    	else
    	{
    		cout<<"28"<<endl;
		}
	}
	else 
	{
		cout<<"30"<<endl;
	}
    return 0;
}
