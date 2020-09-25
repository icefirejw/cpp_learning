#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;

int main()
{
    double x, x1, x2, d;

    cin >> x;

    x1 = x/2;
    do {
        x2 = (x1 + x/x1)/2;
        d = fabs(x2-x1);
        x1 = x2;
    }while ( d > 0.00001);
    printf("%.3f", x2);

}