#include<bits/stdc++.h>
using namespace std;

int dice( int m, int n, int W){
    if(n > W)
        return 0;
    int dp[n+1][W+1] = {0};
    for(int i =  1; i <= m; i++)
        dp[1][i] = 1;
    for(int i = 2; i <= n; i++)
        dp[i][i] = 1;
    for( int i = 2; i <= n; i++)
    for( int j = i+1; j <= W; j++){
        for( int k = 1; k <= m; k++){
            if(j-k >= 1)
                dp[i][j] += dp[i-1][j-k];
        }
    }
    return dp[n][W];
}

int main()
{
    int m, n, X;
    cin >> m >> n >> X;
    cout<<dice(m, n, X);
}
