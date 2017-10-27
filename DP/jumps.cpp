#include<bits/stdc++.h>
using namespace std;

void jump(int ar[], int n){
    int dp[n];
    dp[n-1] = 0;
    for( int i = n-2; i >= 0; i--){
        if(ar[i] >= (n-1-i))
            dp[i] = 1;
        else{
            int min = 1 + dp[i+1];
            for(int j = 2; j <= ar[i]; j++){
                if(min>(1+dp[i+j])){
                    min = 1 + dp[i+j];
                }
            }
            dp[i] = min;
        }
    }

    cout<<"Ans is : "<<dp[0]<<endl;
}

int main(){
    int n;
    cin >> n;
    int ar[n];
    for( int i = 0; i < n; i++){
        cin >> ar[i];
    }
    jump(ar,n);
}
