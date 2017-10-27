#include<bits/stdc++.h>
using namespace std;

#define MAX 100

int dp[MAX][MAX][MAX][2];

int count( int m, int n, int k){
    memset(dp, -1, sizeof dp);
    return go(m-1, n-1, k);
}
int main(){
    int m, n, k;
    cin >> m >> n >> k;
    cout << count(m, n, k);
}
