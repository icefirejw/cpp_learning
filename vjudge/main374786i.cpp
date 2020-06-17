#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;

int main(){
	int n;
	int s;
	double x;
	cin >> x>> n;
	
	x = x - floor(x);

	for (int i=0; i<n; i++){
		x = x * 10;
	}
	
	if (n == 3) x=x+0.1;
		
	s = floor(x);

	s = s%10;
	
	cout << s <<endl;
	
	return 0;
}
