#include<bits/stdc++.h>
using namespace std;

int max( int a, int b){
    return (a > b)? a : b;
}
void mini(char str[], int n){
    int dp[n][n] = {0};
    for( int i = 0; i < n; i++)
        dp[i][i] = 1;
    for( int i = n-2; i >= 0; i--)
    for( int j = i+1; j < n; j++){
        if(str[i] == str[j])
            dp[i][j] = dp[i+1][j-1] + 2;
        else
            dp[i][j] = max(dp[i][j-1], dp[i+1][j]);
    }

    cout<<n-dp[0][n-1];
}

int main()
{
    char str[] = "geeskdnee";
    mini(str, strlen(str));
    return 0;
}
