#include<bits/stdc++.h>
using namespace std;
#define MAX 105
int dp[MAX][MAX][MAX];

int min(int a, int b){
    return (a<b)?a:b;
}

int coun(int n, int k, int rem, int ar[]){
    //cout<<"in"<<endl;
    //cout<<n<<" "<<k<<" "<<rem<<endl;
    if(dp[n][k][rem] != -1)
        return dp[n][k][rem];
    if(n*k == rem && ar[k-1]!=-1){
        dp[n][k][rem] = n*ar[k-1];
        //cout<<"answer"<<n<<" "<<k<<" "<<rem<<" "<<dp[n][k][rem]<<endl;
        return n*ar[k-1];
    }
    else if(n*k == rem && ar[k-1]==-1){
        dp[n][k][rem] = INT_MAX;
        //cout<<"answer"<<n<<" "<<k<<" "<<rem<<" "<<dp[n][k][rem]<<endl;
        return INT_MAX;
    }
    //cout<<"here"<<endl;
    dp[n][k][rem] = INT_MAX;
    for(int i = 0; i < 2; i++){
        if(n-i <= (rem - i*ar[k-1]) && i==0){
                if(n*(k-1)>=rem)
            dp[n][k][rem] = min(dp[n][k][rem], coun(n,k-1,rem,ar));
        }
        else if(n-i <= (rem - i*k) && i==1 && ar[k-1]!=-1){
            if((n-1)*k >= rem-k){
            int temp = coun(n-i,k,rem-i*k,ar);
            if(temp!=INT_MAX)
            dp[n][k][rem] = min(dp[n][k][rem], i*ar[k-1]+temp);
            }
        }
    }
    //cout<<n<<" "<<k<<" "<<rem<<" "<<dp[n][k][rem]<<endl;
    return dp[n][k][rem];
}
int mini(int n, int k, int ar[]){
    memset(dp,-1,sizeof(dp));
    //cout<<dp[n][k][k];
    return coun(n,k,k,ar);
}
int main(){
    int t;
    cin >> t;
    while(t > 0){
        int n, k;
        cin >>n >> k;
        int ar[k];
        for(int i = 0; i < k; i++){
            cin >> ar[i];
        }
        int ans;
        ans = mini(n,k,ar);
        if(ans == INT_MAX)
            cout<<"-1"<<endl;
        else
            cout<<ans<<endl;
    t--;
    }
}
