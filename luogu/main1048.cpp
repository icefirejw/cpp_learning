#include <iostream>
#include <algorithm>

using namespace std;

int dp[105][1005];
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
        for (j=1; j<=T; j++){
            if (j<time[i]) {
                dp[i][j] = dp[i-1][j];
            }
            else{
                dp[i][j] = max(dp[i-1][j], dp[i-1][j-time[i]]+v[i]);
            }
        }
    }    

    cout << dp[M][T]<<endl;
    return 0;

}