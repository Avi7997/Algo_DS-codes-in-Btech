#include<bits/stdc++.h>
using namespace std;

void solution(int ar[], int n, int xyz){

    int dp[25][230];
    int sum[n] = {0};
    sum[0] = ar[0];
    for(int i = 1; i<n; i++){
        sum[i] = ar[i] + sum[i-1];
        //cout<<sum[i]<<endl;
    }

    memset(dp,0,sizeof(dp));

    dp[0][ar[0]] = 1;
    for(int i = 1; i < n; i++){
        for(int j = 0; j <= i; j++){

            if(j==0){
                dp[i][sum[i]] = 1;
                //cout<<i<<" "<<sum[i]<<" "<<dp[i][sum[i]]<<endl;
            }
            else{
                int temp = sum[i] - sum[j-1];
                for(int k = 0; k <= temp; k++){
                    if(dp[j-1][k]!=0)
                        dp[i][temp] = dp[i][temp]+dp[j-1][k];
                }
                //cout<<i<<" "<<temp<<" "<<dp[i][temp]<<endl;
            }
        }
    }
    long long int coun = 0;
    for(int i = 0; i <= sum[n-1]; i++){
        coun = coun + dp[n-1][i];
    }
    cout<<xyz<<". "<<coun<<endl;
}
int main(){
    string str;
    cin >> str;
    int i = 1;
    while(str.compare("bye")){
            int si = str.size();
            int ar[si];
            for(int i = 0; i < si; i++){
                ar[i] = str.at(i) - 48;
            }
            solution(ar, si, i);
            i++;
            cin >> str;
    }
}
