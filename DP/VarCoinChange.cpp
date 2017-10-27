#include<bits/stdc++.h>
using namespace std;

void ways( int n){
    int dp[n+1][3];
    int ar[] = { 3, 5, 10};
    for(int i = 0; i < 3; i++)
        dp[0][i] = 1;
    for(int i = 1; i < n+1; i++)
    for( int j = 0; j < 3; j++){
        int x = (i >= ar[j])?dp[i-ar[j]][j]:0;
        int y = (j >= 1)?dp[i][j-1]:0;
        dp[i][j] = x+y;
    }
    cout<<dp[n][2];
}

int main(){
    int n;
    cin >> n;
    ways(n);
}
