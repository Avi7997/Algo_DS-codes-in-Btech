#include<bits/stdc++.h>
using namespace std;

long double dp[550][3600];

long double counn(int n, int k){
    if(dp[n][k] != -1){
        //cout<<"IN 2 "<<n<<" "<<k<<" "<<dp[n][k]<<endl;
        return dp[n][k];
    }
    if(n==1 && k<7 && k>0){
        //cout<<"IN 1 "<<n<<" "<<k<<endl;
        dp[n][k] = 1.0/6.0;
        return 1.0/6.0;
    }
    /*if(n>k || k>n*6)
        return 0;*/

    //cout<<"bigger "<<n<<" "<<k<<endl;
        dp[n][k] = 0;
    for(int i = 1; i < 7; i++){
        if(n-1 <= k-i && (k-i)<=(n-1)*6){
        long double temp = counn(n-1,k-i);
        if(temp != 0)
            dp[n][k] += temp;
        }
    }
    dp[n][k] = dp[n][k]/6;
    //cout<<"IN 3 "<<n<<" "<<k<<" "<<dp[n][k]<<endl;
    return dp[n][k];
}
/*long double solution(int n, int k){

    return counn(n, k, dp);
}*/
int main(){
    int t;
    cin >> t;
    for(int i =0; i<550;i++)
        for(int j =0;j<3600;j++)
        dp[i][j]=-1;
    while(t>0){
        int n,k;
        cin >> n >> k;
        if(n>=546 || k>n*6)
            cout<<"0"<<endl;
        else{
        long double ans = counn(n,k)*100;
        cout<<(int)ans<<endl;
        double uans = ans;
        /*for(int i = 0; i < n; i++)
            uans = uans/6;
        uans = uans * 100;*/
        }
        //cout<<(int)uans<<endl;
    t--;
    }
}
