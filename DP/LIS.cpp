#include<bits/stdc++.h>
using namespace std;

void sum ( int ar[], int n){
    int dp[n];
    dp[0] = ar[0];
    for( int i=1; i<n; i ++){
        int j = i-1;
        while(ar[i]<ar[j]){
            j--;
            if(j<0)
                break;
        }
        if(j<0){
            dp[i] = ar[i];
            continue;
        }
        dp[i] = dp[j] + ar[i];
    }
    int max = dp[0];
    for( int i = 1; i < n; i++)
        if(max<dp[i])
            max = dp[i];
    cout<<max;
}
int main (){
    int n;
    cin >> n;
    int ar[n];

    for ( int i= 0; i< n; i++){
        cin >> ar[i];
    }
    sum(ar,n);
}
