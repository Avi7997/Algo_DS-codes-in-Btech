#include<bits/stdc++.h>
using namespace std;

void answer(string str, int n){
    int dp[n+1][n+1];
    int ans = 0, i2, j2;
    memset(dp, 0, sizeof(dp));
    for( int i = 1; i < n; i++){
        for( int j = i+1; j < n+1; j++){
            if(str[i-1] == str[j-1] && dp[i-1][j-1] < (j-i))
                dp[i][j] = dp[i-1][j-1] + 1;
            else
                dp[i][j] = 0;
            if(ans < dp[i][j]){
                ans = dp[i][j];
                i2 = i-1;
            }
        }
    }
    for(int i = 0; i < ans; i++){
        cout<<str[i2-ans+1+i];
    }
}

int main(){
    string str;
    cin >> str;
    int n = str.length();
    answer(str, n);
    return 0;
}
