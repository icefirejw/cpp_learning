#include <iostream>
#include <cstdio>

using namespace std;

int main() {
    int a,b,c,d;
    int e = 0,f = 0;
    cin >> a >> b >> c >> d;

    if (b>d){
        f = d+60 -b;
        c--;
        e = c - a;
    }
    else{
        f = d - b;
        e = c - a;
    }

    cout << e << " " << f;


    return 0;
}

