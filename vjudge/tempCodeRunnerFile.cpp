#include <iostream>

using namespace std;

int s1[105]={0};
int s2[105]={0};

void fb(long long n, int s[])
{
    while (n!=0)
    {
        int idx = n%10;
        s[idx] = 1;
        n=n/10;
    }
}

int main()
{
    long long a,b;

    cin>>a>>b;
    fb(a,s1);
    fb(b,s2);
    for (int i=1; i<10; i++){
        if (s1[i]==1 && s2[i]==1){
            cout << i << " ";
        }
    }
    return 0;
    
}