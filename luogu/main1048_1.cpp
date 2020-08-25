#include <iostream>
#include <algorithm>

using namespace std;

int dp[1005];
int main()
{
    int T,M;
    int i,j;
    cin>>T>>M;

    int time[M+1];
    int v[M+1];

    for (i=1; i<=M; i++){
        cin >>time[i]>>v[i];
    }
    for (i=1; i<=M; i++){
        for (j=T; j>=time[i]; j--){
                dp[j] = max(dp[j], dp[j-time[i]]+v[i]);
                //cout << "j="<<j<<" time="<<time[i]<<dp[j] <<endl;
        }
        //cout << "\ni="<<i<<endl;
    }    

    cout << dp[T]<<endl;
    return 0;

}