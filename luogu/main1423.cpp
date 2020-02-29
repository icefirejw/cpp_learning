#include <iostream>
#include <cstdio>

using namespace std;

int main() {
    double k;
    double n = 2;
    int cnt = 0;
    double s = 0;

    cin >> k;
    while(s < k) {
        s = s + n;
        n = n * 0.98;
        cnt++;

        //cout << cnt << " " << s << endl;
        if (s >= k)
            break;
    }

    cout << cnt;

    return 0;
}

