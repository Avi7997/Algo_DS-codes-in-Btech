#include<bits/stdc++.h>
using namespace std;

void solution ( int ar[], int n, int rhs){
    int dp[n][rhs+1]={0};
    for( int i = 0; i < n; i++)
        dp[i][0] = 1;
    for(int i = 1; i < rhs+1; i++){
            dp[0][i] = 0;
        if( i % ar[0] == 0)
            dp[0][i] = 1;
    }

    for( int i = 1; i < n; i++)
    for( int j = 1; j < rhs+1; j++){
        dp[i][j] = dp[i-1][j];
        if(ar[i] <= j && j-ar[i]>=0)
            dp[i][j] += dp[i][j-ar[i]];
    }
    /*for( int i = 0; i < n; i++){
        for( int j = 0; j < rhs+1; j++)
        cout<<dp[i][j]<<" ";
    cout<<endl;
    }*/
    cout<<dp[n-1][rhs];
}
int main(){
    int n, rhs;
    cin >> n >>rhs;
    int ar[n];
    for(int i= 0; i < n; i++)
        cin >> ar[i];
    solution( ar, n, rhs);
}
