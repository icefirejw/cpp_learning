#include <iostream>
#include <cstdio>

using namespace std;

int main() {
    int a;
    double s = 0;
    cin >> a;

    if (a >=0 && a<=150){
        s = 0.4463*a;
    }
    else if (a>150 && a<=400) {
        s = 0.4463*150 + (a-150)*0.4663;
    }
    else if (a>400){
        s = 0.4463*150 + (400-150)*0.4663 + (a-400)*0.5663;
    }

    printf("%.1f",s);


    return 0;
}

