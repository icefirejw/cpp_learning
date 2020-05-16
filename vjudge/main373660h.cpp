#include <iostream>
#include <cstdio>

using namespace std;

int main(){
	int n;
	int sum;

	while(scanf("%d",&n) != EOF)
	{
        if(0<=n&&n<=10)
        	sum=n*6;
    	if(11<=n&&n<=20)
        	sum=10*6+(n-10)*2;
    	if(21<=n&&n<=40)
        	sum=10*6+10*2+(n-20)*1;
    	else if(n>=41)
        	sum=100;

        printf("%d\n",sum);

	}
	return 0;
}
