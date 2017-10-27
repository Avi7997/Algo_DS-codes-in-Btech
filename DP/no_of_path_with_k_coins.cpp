#include<bits/stdc++.h>
using namespace std;
#define MAX_K 1000
int dp[3][3][MAX_K];

int go(int mat[][3], int m, int n, int k){
    if(m < 0 || n < 0)
        return 0;
    if(m == 0 && n==0)
        return (k == mat[m][n]);
    if (dp[m][n][k] != -1) return dp[m][n][k];
    dp[m][n][k] = go(mat, m-1, n, k - mat[m][n]) + go(mat, m, n-1, k - mat[m][n]);
    return dp[m][n][k];
}
int count(int mat[][3], int k){
    memset(dp, -1, sizeof dp);
    return go(mat, 2, 2, k);
}
int main(){
    int mat[3][3] = { {1, 2, 3},
                      {4, 6, 5},
                      {3, 2, 1}
                  };
    int k = 12;
    cout << count(mat, k);
}
