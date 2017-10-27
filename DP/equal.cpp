#include<bits/stdc++.h>
using namespace std;
int dp[9999] = {0};

int min( int a, int b){
    return (a>b)?b:a;
}
int coin( int n){

    if(dp[n] != 0)
        return dp[n];

    int dp2[3][n+1] = {0};
    for( int i = 0; i <= 2; i++)
    for( int j = 0; j <= n ; j++)
        dp2[i][j]=0;

    int ar[] = { 1, 2, 5};
    for( int i = 0; i <= n; i++)
        dp2[0][i] = i;
    for( int i = 1; i <= 2; i++)
    for( int j = 1; j <= n ; j++){
        if(ar[i] > j)
            dp2[i][j] = dp2[i-1][j];
        else
            dp2[i][j] = min(dp2[i][j-ar[i]]+1,dp2[i-1][j]);
    }
    dp[n] = dp2[2][n];
    /*for( int i = 0; i <= 2; i++){
    for( int j = 0; j <= n ; j++)
        cout<<dp2[i][j]<<" ";
    cout<<endl;}*/
    //cout<<"for "<<n<<" "<<dp[n]<<endl;
    return dp[n];
}

void choco( int ar[], int n){
    sort(ar, ar + n);
    int temp = 0, ans = 0;
    for( int i = 1; i < n; i++){
        ar[i] += temp;
        if(ar[i] == ar[i-1])
            continue;
        ans += coin(ar[i] - ar[i-1]);
        temp += ar[i] - ar[i-1];
    }
    cout<<ans<<endl;
}

int main()
{
    int t;
    cin >> t;
    for ( int i = 0; i < t; i++){
        int n;
        cin >> n;
        int ar[n];
        for( int j = 0; j < n; j++)
            cin >> ar[j];
        choco(ar, n);
    }
}
