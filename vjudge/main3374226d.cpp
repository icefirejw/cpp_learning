#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;

int main(){
	int n;
	int a[12];
	int cnt = 0;
	int sum = 0;
	bool flag = true;

    cin >> n;

    if (n < 0){
        flag = false;
        n = 0 - n;
    }

    while(n != 0) {
        a[cnt] = n%10;
        n = n/10;
        cnt++;
    }

    for (int i = 0; i<cnt; i++){
        sum = sum*10 + a[i];
    }
    if (flag == false)
        sum = 0 - sum;

    cout << sum;
	return 0;
}
