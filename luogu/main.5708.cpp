#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;

double a,b,c,p,sum;
int main() {
    cin>>a>>b>>c;
    p=1.0*(a+b+c)/2;
    sum=sqrt((p-a)*(p-b)*(p-c)*p);
    printf("%0.1f\n",sum);
    return 0;
}
