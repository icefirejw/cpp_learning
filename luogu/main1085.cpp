

#include <iostream>
#include <cstdio>

using namespace std;

int main() {
    int i;
    int c = 0;
    int a[10],b[10];

    for (i=1; i<=7; i++){

        cin >>a[i]>>b[i];

    }

    for (i=1; i<=7; i++){
        if (a[i]+b[i] > 8)
        {
            c = i;
            break;
        }
    }
    cout << c;

    return 0;
}

