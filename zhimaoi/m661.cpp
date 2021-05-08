#include <cstdio>
#include <cstring>
#include <iostream>
#include <string>

using namespace std;

long long sum;
char a[25000003];
long long s0, s1;

int main()
{
    scanf("%s", a);
    //cout << a << endl;

    s0 = 9; // 0..9
    s1 = 8; // 9-10
    int s_len = strlen(a);

    if (s_len == 1)
    {
        sum = a[0] - '0' - 1;
    }
    else
    {
        sum = a[s_len-1] - '0' - 1;
        int j = 0;
        for (int i = s_len - 1 - 1; i >= 0; i--)
        {
            j++;
            int p = a[i]-'0';
            sum += s1 * p + s0 * p;
            s0 = s1 * 9 + s0 * 10;
            s1 = s1 + 9;
        }
    }
    cout <<sum%1914270647 <<endl;
}
