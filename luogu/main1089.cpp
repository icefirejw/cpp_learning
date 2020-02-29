

#include <iostream>
#include <cstdio>

using namespace std;

int main() {
    int i;
    int s = 0; //´æ¿î
    int y = 0; //µ±ÔÂÓà¶î
    int m = 0;
    int a[13];

    for (i=1; i<=12; i++){
        cin >>a[i];
    }


    for (i=1; i<=12; i++){
        y = y + 300 - a[i];

        if (y<0){
            y = 0;
            m = -i;
            break;
        }

        if (y >= 100) {
            s += (y/100)*100;
            y = y % 100;
        }
    }

    if (m != 0) {
        cout << m <<endl;
    }
    else
    {
        cout << y + s*1.2 <<endl;
    }

    return 0;
}

