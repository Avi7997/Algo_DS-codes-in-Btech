#include<bits/stdc++.h>
using namespace std;

int max(int a, int b){
    return (a>b)?a:b;
}

int sweet(int ar[], int n){
    int dp[n][n][3];
    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++)
        for(int k = 0; k < 3; k++)
        dp[i][j][k] = 0;
    for(int i = n-1; i >= 0; i--)
    for(int j = i; j < n; j++){
            if(i==j){
                if(ar[i] == 0)
                    dp[i][j][0] = 1;
                else{
                    dp[i][j][1] = 1;
                    dp[i][j][2] = 1;
                }
            }
            else{
                if(ar[j] == 0){
                    dp[i][j][0] = dp[i][j-1][0] + 1;
                    dp[i][j][1] = dp[i][j-1][1];
                }
                else{
                    dp[i][j][0] = dp[i][j-1][0];
                    dp[i][j][1] = dp[i][j-1][1] + 1;
                }
                if(dp[i][j][0] < dp[i][j][1])
                    dp[i][j][2] = dp[i][j][0] + dp[i][j][1];
                for(int k = i; k < j; k++){
                    dp[i][j][2] = max(dp[i][j][2], dp[i][k][2] + dp[k+1][j][2]);
                }
            }
    }
    return dp[0][n-1][2];
}

int main(){
    int t;
    cin >> t;
    while(t > 0){
        int n;
        cin >> n;
        int ar[n];
        string str;
        cin >> str;
        for(int i = 0; i < n; i++){
            if(str.at(i)== '0')
                ar[i] = 0;
            else
                ar[i] = 1;
        }
        int ans = sweet( ar, n);
        cout << ans <<endl;
        t--;
    }

}
