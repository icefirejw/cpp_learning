#include <iostream>

using namespace std;

int s1[15]={0};
int s2[15]={0};
int res[15] = {0};

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
    bool ext = false;
    for (int i=1; i<10; i++){
        if (s1[i]==1 && s2[i]==1){
            res[i] = 1;
            ext = true;
        }
    }
    if (!ext){
        cout << "-1"<<endl;
    }
    else
    {
        bool fst = true;
        for (int j=0; j<10; j++){
            if (!fst)
                cout <<" ";
            if (res[j] == 1){
                cout<<j;
                fst = false;
            }
        }
        cout <<endl;
    }
    
    return 0;
    
}