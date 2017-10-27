#include<bits/stdc++.h>
using namespace std;

int max(int a, int b) { return (a > b)? a : b; }

void knapsack( int val[], int wt[], int W, int n){
    int dp[n][W+1] = {0};
    for ( int i = 0; i <= W; i++){
            dp[0][i] = 0;
        if(wt[0] <= i)
        dp[0][i] = val[0];
    }
    for( int i = 1; i < n; i++)
    for( int j = 1; j <= W; j++){
        if(wt[i] <= j){
            dp[i][j] = max(dp[i-1][j-wt[i]]+val[i],dp[i-1][j]);
        }
    }
    /*for( int i = 0; i < n; i++){
        for( int j = 0; j <= W; j++)
        cout << dp[i][j] <<" ";
    cout << endl;
    }*/
    cout << dp[n-1][W];
}
int main(){
    int n, W;
    cin >> n >> W;
    int val[n],wt[n];
    for( int i = 0; i < n; i++)
        cin >> val[i];
    for( int i = 0; i < n; i++)
        cin >> wt[i];
    knapsack( val, wt, W, n);
}
