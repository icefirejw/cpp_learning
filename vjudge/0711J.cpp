#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;

double js(int d,double a0, double a1, double a2, int t, double b1, int c){
    double sum=0;
    
    if (d<=3){
        sum+=a0 + t*b1 + c;
    }
    else if (d>3 && d<=10){
        sum += a0 + (a0/3 + a1)*(d-3) + t*b1 + c;
    }
    else if (d>10){
        sum += a0 + (10-3)*(a0/3 + a1) + (a0/3 + a2) *(d-10) + t*b1 + c;
    }
    return sum;
}
int d[1000];
int t[1000];

int main(){
    int n;
    cin>>n;
    for (int i=0; i<n; i++){
        cin >> d[i] >> t[i];
    }

    for (int i=0; i<n; i++)
    {
        double sum1 = (js(d[i], 10, 2, 3, t[i], 2.0/5, 1 ));
        double sum2 = (js(d[i], 11, 2.5, 3.75, t[i], 2.5/4,0 ));
        //cout << sum2 << " " <<sum1<<" ";
        cout << round(sum2) - round(sum1)<< endl;

    }
    return 0;
}