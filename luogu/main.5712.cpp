#include<bits/stdc++.h>
using namespace std;
int x;
int main() {
    cin>>x;
    if(x==0)
    {
    	cout<<"Today, I ate 0 apple.";
    	break;
	}
	else if(x==1)
	{
		cout<<"Today, I ate 1 apple.";
		break;
	}
	else
	{
		cout<<"Today, I ate "<<x<<" apple.";
    	break;
	}
	return 0;
}
