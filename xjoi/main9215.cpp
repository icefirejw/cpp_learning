#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;

int main(int argc, char** argv) {
	int a;
	cin>>a;
	if(a%2==0)
	{
		cout<<(a/2)*(a/2);
	}
	else
	{
		cout<<((a+1)/2)*((a-1)/2);
	}
	return 0;
}
