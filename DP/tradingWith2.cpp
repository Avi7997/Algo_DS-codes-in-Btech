#include<bits/stdc++.h>
using namespace std;

int maxi( int a, int b){
    return (a>b)?a:b;
}

void ans( int ar[], int n){
    int dp[n] = {0};
    dp[0] = 0;

    int max = ar[n-1], fin = INT_MIN;
    dp[n-2] = max-ar[n-2];
    for( int i = n-3; i>=0; i--){
        dp[i] = maxi(dp[i+1], max-ar[i]);
        if(ar[i] > max)
            max = ar[i];
    }
    /*for( int i = 0; i < n; i++)
        cout<<dp[i]<<" ";
    cout << endl;*/

    int min = ar[0];

    dp[1] = ar[1] - min;
    for(int i = 2; i < n-2; i++){
        dp[i] = maxi(dp[i-1], ar[i] - min);

        if(dp[i]+dp[i+1] > fin)
            fin = dp[i]+dp[i+1];

        if(ar[i] < min)
            min = ar[i];
    }

    cout << fin;
}

int main()
{
        /*int n;
        cin >> n;
        int ar[n];
        for( int i = 0; i < n; i++)
            cin >> ar[i];*/
        int ar[] = { 9, 15, 21, 5 , 1};
        int n = sizeof(ar) / sizeof(ar[0]);
        ans(ar, n);
}
