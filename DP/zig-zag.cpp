#include<bits/stdc++.h>
using namespace std;

int max( int a, int b){
    return (a>b)?a:b;
}
int zigzag(int ar[], int n){
    int dp[n][2];
    memset(dp, -1, sizeof dp);
    for (int i = 0; i < n; i++){
        dp[i][0] = 1;
        dp[i][1] = 1;
    }
    for(int i = 1; i < n; i++ )
    for( int j = 0; j < i; j++){
        if(ar[j] < ar[i])
            dp[i][0] = max(dp[i-1][0], dp[j][1] + 1);
        else if(ar[j] > ar[i])
            dp[i][1] = max(dp[i-1][1], dp[j][0] + 1);
    }
    return max(dp[n-1][0], dp[n-1][1]);
}

int main(){
    int arr[] = {10, 1,22,15, 9,22, 33, 45, 49, 33,55,59,63,43, 50, 31,100,20, 60};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout << zigzag(arr, n);
}
