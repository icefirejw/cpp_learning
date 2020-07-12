#include <iostream>
#include <cmath>
using namespace std;
void jh(int &x, int &y){
    int t;
    t = x;
    x = y;
    y = t;

}
int main(){
    int x,y,z;

    cin>>x>>y>>z;

    if (abs(x)>abs(y)){
        jh(x,y);
    }
    if (abs(x)> abs(z)){
        jh(x,z);
    }
    if (abs(y)>abs(z)){
        jh(y,z);
    }
    if (abs(x)==abs(y) && x>y){
        jh(x,y);
    }

    if (abs(y)==abs(z) && y>z){
        jh(y,z);
    }
    cout << x <<" " <<y << " " << z<<endl;
    return 0;
}