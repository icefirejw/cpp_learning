#include <iostream>
#include <cstdio>

using namespace std;

int main(){
	int n;
	double sum = 0.2;
	cin >> n;
	
	if (n>=0 && n<=10) {
		sum = sum + n*0.8;
	}
	else if (n>10 && n<=20) {
		sum = sum + 10*0.8 + (n-10)*0.75;
	}
	else if (n>20 && n<=30) {
		sum = sum + 10*0.8 + 10*0.75 + (n-20)*0.7;
	}
	else {
		cout << "Fail" <<endl;
		return 0;
	}
	
	printf("%.2f\n", sum);
	
	return 0;
}
