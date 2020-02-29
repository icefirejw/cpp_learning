#include <iostream>
#include <cstdio>

using namespace std;

int main() {
    int k;
    int n = 1;
    double s = 0;

    cin >> k;
    while(s < k) {
        s = s + (1.0/n);
        // cout << n << " " << s << endl;
        if (s >= k)
            break;

        n++;
    }

    cout << n;

    return 0;
}

