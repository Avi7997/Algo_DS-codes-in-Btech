#include<bits/stdc++.h>
using namespace std;

int main(){
    string str;
    cin >> str;

    while(str.compare("0")){
        int len = str.length();
        int ar[len];
        for(int i = 0; i <len;i++){
            ar[i] = str[i]-48;
        }
        int dp[len];
        dp[0] = 1;
        dp[1] = 1;
        if((ar[0]==2 && ar[1]<7) || (ar[0]==1))
            dp[1] = 2;
        //cout<<dp[1]<<" ";
        if(ar[1]==0)
            dp[1]=dp[1]-1;
        //cout<<dp[1]<<" ";
        for(int i =2;i<len;i++){
            dp[i] = dp[i-1];
            if((ar[i-1]==2 && ar[i]<7) || (ar[i-1]==1))
                dp[i] = dp[i-1] + dp[i-2];
            if(ar[i]==0)
                dp[i] = dp[i] - dp[i-1];
            //cout<<dp[i]<<" ";

        }
        //cout<<endl;
        cout<<dp[len-1]<<endl;
        cin>>str;
    }
}
