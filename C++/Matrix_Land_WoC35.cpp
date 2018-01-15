#include <bits/stdc++.h>

using namespace std;

void kadane(vector < vector<int> > &A, int size, int j, vector < vector<int> > &dp){
   int max_so_far = A[j][0];
   int curr_max = A[j][0];
   int forw[size], rev[size];
   forw[0] = A[j][0];
   for(int i = 1; i < size; i++)
   {
        curr_max = max(A[j][i], curr_max+A[j][i]);
        forw[i] = curr_max;
        max_so_far = max(max_so_far, curr_max);
   }
   max_so_far = A[j][size-1];
   curr_max = A[j][size-1];
   rev[size-1] = A[j][size-1];
   for (int i = size-2; i >= 0; i--)
   {
        curr_max = max(A[j][i], curr_max+A[j][i]);
        rev[i] = curr_max;
        max_so_far = max(max_so_far, curr_max);
   }
   if(j==0){
       for(int i = 0; i < size; i++){
            dp[j][i] = forw[i] + rev[i] - A[j][i];
            //cout<<dp[j][i]<<" ";
       }
       //cout<<endl;
       return;
   }

   int dp2[size],dp1[size];
   int which[size];
   memset(which,0,sizeof(which));

   dp1[size-1] = dp[j-1][size-1] + A[j][size-1];
   for(int  i = size-2; i >=0; i--){
        dp1[i] = max(dp1[i+1]+A[j][i], dp[j-1][i] + rev[i]);
   }
   dp2[0] = dp[j-1][0] + A[j][0];
   for(int  i = 1; i <size; i++){
        dp2[i] = max(dp2[i-1]+A[j][i], dp[j-1][i] + forw[i]);
   }

   /*
   for(int i = 1; i < size; i++){
        int tempi = max(dp[j][i-1]+A[j][i], dp[j-1][i] + forw[i]);
        if(tempi>dp[i][j]){
            which[i] = 1;
            dp[i][j] = tempi;
        }
   }*/
   for(int i =0; i<size; i++){
    if(dp1[i]>dp2[i])
        dp[j][i] = dp1[i] + forw[i] - A[j][i];

   else
        dp[j][i] = dp2[i] + rev[i] - A[j][i];
   }
   /*for(int i = 0; i < size; i++)
    cout<<dp[j][i]<<" ";
   cout<<endl;*/
}

int matrixLand(vector < vector<int> > A, int n, int m) {
    vector < vector<int> > dp(n,vector<int>(m));

    for(int p = 0; p < n; p++)
        for(int q = 0; q <m; q++)
            dp[p][q]=INT_MIN;

    for(int i = 0; i < n; i++){
        kadane(A, m, i, dp);
    }
    int ans = 0;

    for(int i = 0; i < m; i++){
        if(dp[n-1][i]>ans)
            ans  = dp[n-1][i];
        //cout<<"ans "<<ans<<endl;
    }
    return ans;
}

int main() {
    int n;
    int m;
    cin >> n >> m;
    vector< vector<int> > A(n,vector<int>(m));
    for(int A_i = 0;A_i < n;A_i++){
       for(int A_j = 0;A_j < m;A_j++){
          cin >> A[A_i][A_j];
       }
    }
    int result = matrixLand(A,n,m);
    cout << result << endl;
    return 0;
}
