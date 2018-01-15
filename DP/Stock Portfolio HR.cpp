#include <bits/stdc++.h>

using namespace std;
int max(int a, int b){
    return (a>b)?a:b;
}
long long int maxTotalStrength(vector <int> strength, vector <int> l, vector <int> r, int n) {
    long long int dp[n];
    memset(dp, 0, sizeof(dp));
    dp[0] = (long long int)strength[0];
    for(int i = 1; i < n; i++){
            int temp = i-l[i]-1, te2 = 0;
            if(temp<0){
                te2 = 1;
                goto xyz;
            }
        while(temp+r[temp]>=i){
            temp--;
            if(temp<0){
                te2 = 1;
                break;
            }
        }
        xyz: dp[i] = dp[i-1];
        if(te2==0)
            dp[i] = max(dp[i],strength[i]+dp[temp]);
            else
                dp[i] = max(dp[i],strength[i]);
    }
    return dp[n-1];
}

int main() {
    int n;
    cin >> n;
    vector<int> strength(n);
    for(int strength_i = 0; strength_i < n; strength_i++){
       cin >> strength[strength_i];
    }
    vector<int> l(n);
    for(int l_i = 0; l_i < n; l_i++){
       cin >> l[l_i];
    }
    vector<int> r(n);
    for(int r_i = 0; r_i < n; r_i++){
       cin >> r[r_i];
    }
    long long int result = maxTotalStrength(strength, l, r, n);
    cout << result << endl;
    return 0;
}
