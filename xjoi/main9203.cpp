#include <iostream>

using namespace std;

int main(int argc, char** argv) {
	int a;
	cin>>a;
	cout<<a%10*100+a/10%10*10+a/100<<endl;
	return 0;
}
