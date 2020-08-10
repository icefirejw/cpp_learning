#include <cmath>
#include <cstdio>
#include <iostream>

using namespace std;

void func(double a, double b, double c)
{
    double d = b * b - 4.0 * a * c;
    double x_1, x_2;

    if (d >= 0)
    {
        x_1 = ((0 - b) * 1.0 + sqrt(d)) / (2.0 * a);
        x_2 = ((0 - b) * 1.0 - sqrt(d)) / (2.0 * a);
        printf("x1=%.3f x2=%.3f\n", x_1, x_2);
    }
    else
    {
        x_1 = ((0 - b) * 1.0) / (2.0 * a);
        x_2 = sqrt(fabs(d)) / (2.0 * a);
        printf("x1=%.3f+%.3fi x2=%.3f-%.3fi\n", x_1, x_2, x_1, x_2);
    }
    return;
}

int main()
{
    double a, b, c;
    cin >> a >> b >> c;
    func(a, b, c);
    return 0;
}