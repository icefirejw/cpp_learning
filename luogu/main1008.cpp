#include <iostream>
#include <cstdio>

using namespace std;

int main() {
    int r[10] = {0};
    int a1, a2 , a3;
    int gw1,sw1,bw1;
    int gw2,sw2,bw2;
    int gw3,sw3,bw3;

    for(a1 = 123; a1 < 333; a1++)
    {
        for (int i=0; i<10; i++){
            r[i] = 0;
        }

        a2 = a1*2;
        a3 = a1*3;
        if (a3 > 999){
            cout << "!!!!!!!!" << endl;
            continue;
        }

        gw1 = a1%10;
        bw1 = a1/100;
        sw1 = (a1/10)%10;
        r[gw1] = 1;
        r[sw1] = 1;
        r[bw1] = 1;

        gw2 = a2%10;
        bw2 = a2/100;
        sw2 = (a2/10)%10;
        r[gw2] = 1;
        r[sw2] = 1;
        r[bw2] = 1;

        gw3 = a3%10;
        bw3 = a3/100;
        sw3 = (a3/10)%10;
        r[gw3] = 1;
        r[sw3] = 1;
        r[bw3] = 1;

        bool ok = true;

        for (int j=1; j<=9; j++)
        {
            if (r[j] == 0){
                ok = false;
                break;
            }
        }

        if (ok == true)
            cout << a1 <<" " << a2 <<" "<< a3 <<endl;

    }

    return 0;
}

