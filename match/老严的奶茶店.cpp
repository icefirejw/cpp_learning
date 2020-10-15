#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

struct CUP
{
    int c;
    int m;
};

struct CUP cup[3];

void ds(struct CUP &c1, struct CUP &c2){
    if (c1.m+c2.m <= c2.c){
        c2.m=c1.m+c2.m;
        c1.m=0;
    }
    else{
        c1.m = c1.m-(c2.c-c2.m);
        c2.m = c2.c;
    }
}
int main()
{
    int i;
    for (i=0; i<3; i++){
        cin >> cup[i].c >> cup[i].m;
    }

    for (i=0; i<100; i++){
        int dc = i%3;
        int dr = (i+1)%3;
        ds(cup[dc],cup[dr]); 
    }

    for (i=0; i<3; i++){
        cout << cup[i].m <<endl;
    }
    return 0;
}