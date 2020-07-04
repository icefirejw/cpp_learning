#include <iostream>

using namespace std;

int fun_plus(int n)
{
	if (n < 0)
		return -1;
	else if (n == 0) 
		return 1;
	else if (n == 1)
		return 1;
	else if (n > 1)
		return n* (fun_plus(n-1)); 
}

int main(int argc, char** argv) {
	int i;
	cin >> i;
	
	// calculate the n!
	cout << fun_plus(i);
	
	return 0;
}
