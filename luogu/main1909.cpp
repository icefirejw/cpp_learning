#include <iostream>
#include <cstdio>

using namespace std;

int main() {
    int n;
    int a1,b1,a2,b2,a3,b3;
    int s1, s2, s3;
    int s;

    cin >> n;
    cin >> a1 >> b1;
    cin >> a2 >> b2;
    cin >> a3 >> b3;

    if (n % a1 > 0){
        s1 = (n/a1 + 1) * b1;
    }
    else {
        s1 = (n/a1) * b1;
    }

    if (n % a2 > 0){
        s2 = (n/a2 + 1) * b2;
    }
    else {
        s2 = (n/a2) * b2;
    }

    if (n % a3 > 0){
        s3 = (n/a3 + 1) * b3;
    }
    else {
        s3 = (n/a3) * b3;
    }

    s = s1;

    if (s > s2)
        s = s2;

    if (s > s3)
        s = s3;

    cout << s;

    return 0;
}

