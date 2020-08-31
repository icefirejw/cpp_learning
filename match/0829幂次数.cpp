#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;
typedef long long ll;
ll num[10000];
bool prime_num(ll n)
{
    ll i;
    for (i=2; i<=sqrt(n); i++){
        if (n%i == 0)
            return false;
    }
    return true;
}
int gereration_num(ll x,ll  c[], int &cnt)
{
    ll i=1,j=1;
    cnt = 0;
    for (i=2; i<=sqrt(x); i++)
    {
        if (prime_num(i) != true)
            continue;

        for (j=1; pow(i,j)<=x; j++){
            ll pow_num = 1;
            for (ll t=0; t<j; t++){
                pow_num *= i;
            }


            if ((x % pow_num)==0 && x%(pow_num*i)!=0){
                c[cnt++] = pow_num;
                //cout << pow_num << " i=" << i << " j=" << j <<endl;
            }
        }
        
    }
    return 0;
}
bool compare(int a,int b)
{
    return a>b; //降序排列，如果改为return a<b，则为升序
}

int main()
{
    int x, k;
    int cnt;
    cin>>x>>k;

    gereration_num(x, num, cnt);
    num[cnt++] = 1;

    sort(num, num+cnt, compare);

    for (int i=0; i<k; i++){
        cout << num[i] << " " ;
    }

}