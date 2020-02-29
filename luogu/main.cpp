#include <iostream>
#include <cstdio>

using namespace std;

int main() {
    int x,n;
    int s = 0;
    int i;
    int cnt = 0;
    cin >> n >> x;

    for (i=1; i<=n; i++) {
        s = i;
        while (s > 0){
            int c;
            c = s % 10;
            if (c == x)
                cnt++;

            s = s/10;
        }
    }

    cout << cnt;

    return 0;
}

