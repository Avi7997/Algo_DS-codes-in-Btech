#include<bits/stdc++.h>
using namespace std;

int max( int a, int b){
    return (a>b)?a:b;
}
void optimal( int ar[], int n){
    int dp[n][n] = {0};
    for( int i = 0; i < n; i++){
        dp[i][i] = ar[i];
        if(i!=n-1)
            dp[i][i+1] = max(ar[i],ar[i+1]);
    }
    for( int i = n-3; i >= 0; i--)
    for( int j = i+2; j < n; j++){
        int x = min(dp[i+2][j]+ar[i],dp[i+1][j-1]+ar[i]);
        int y = min(dp[i][j-2]+ar[j],dp[i+1][j-1]+ar[j]);
        dp[i][j] = max(x,y);
    }
    cout<<dp[0][n-1];
}

int main()
{
    int n = 12;
    //cin >> n;
    int ar[n] = {20, 30, 2, 2, 2, 10, 45,89,23 ,78,42,21};
    /*for( int i = 0; i < n; i++)
        cin >> ar[i];*/
    optimal(ar,n);
}
