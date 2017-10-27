#include<bits/stdc++.h>
using namespace std;
struct hey{
    int a;
    int b;
};

void chain(struct hey ar[], int n){
    int dp[n], mac[n]={0};
    dp[n-1] = 1;
    mac[n-1] = 1;
    for( int i = n-2; i >= 0; i--){
            int j = i+1;
            mac[i] = mac[i+1];
            //cout<<"mac "<<mac[i]<<endl;
        while(ar[i].b > ar[j].a){
            j++;
            if(j >= n)
                break;
        }
        if(j == n){
            dp[i] = 1;
            continue;
        }
        //cout<<"J is here "<<j<<endl;
        dp[i] = mac[j] + 1;
        if(mac[i]<dp[i])
            mac[i] = dp[i];
    }
    /*for(int i = 0; i< n; i++)
        cout<<mac[i]<<" ";
    cout<<endl;*/
    cout<<dp[0];
}
int main(){
    int n;
    cin >> n;
    struct hey ar[n];
    for( int i = 0; i < n; i++){
        cin >> ar[i].a;
        cin >> ar[i].b;
    }
    chain(ar,n);
}
