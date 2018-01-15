#include<bits/stdc++.h>
using namespace std;

int max(int a, int b){
    return (a>b)?a:b;
}
void solution(string s1, string s2){
    int n = s1.size();
    int m = s2.size();
    int dp[n][m];
    memset(dp,0,sizeof(dp));
    if(s1.at(0) == s2.at(0)){
        dp[0][0] = 1;
    }
    for(int i = 1; i < m; i++){
        if(s1.at(0) == s2.at(i))
            dp[0][i] = 1;
        else
            dp[0][i] = dp[0][i-1];
    }
    for(int i = 1; i < n; i++){
        if(s2.at(0) == s1.at(i))
            dp[i][0] = 1;
        else
            dp[i][0] = dp[i-1][0];
    }
    for(int i = 1; i <n;i++)
    for(int j = 1; j<m;j++){
        if(s1.at(i) == s2.at(j))
            dp[i][j] = dp[i-1][j-1] + 1;
        else
            dp[i][j] = max(dp[i][j-1], dp[i-1][j]);
    }
    /*for(int i = 0; i <n;i++){
    for(int j = 0; j<m;j++)
        cout<<dp[i][j]<<" ";
    cout<<endl;
    }*/
    //cout<<dp[n-1][m-1]<<endl;
    int p = n-1, q = m-1;
    vector<int> fs1;
    vector<int> fs2;
    //cout<<"here"<<endl;
    int f1=INT_MAX,f2 = INT_MAX,f3=INT_MAX,f4=INT_MAX;
    for(int i = dp[n-1][m-1]; i > 0; i--){
            if(i==1){
                    //cout<<"incremented"<<p+1<<endl;
                int tamp1 = 0;
                int tamp2 = 0;
                for(int j = 0; j < n; j++){
                    for(int k = 0; k < m; k++)
                if(dp[j][k] == 1){
                    f1=j;
                    f2=k;
                    tamp2 = 1;
                    //cout<<"f1 "<<f1<<" f2 "<<f2<<endl;
                    break;
                }
                if(tamp2 == 1)
                    break;
                }
                for(int j = 0; j < m; j++){
                    for(int k = 0; k < n; k++)
                if(dp[k][j] == 1){
                    f3=k;
                    f4=j;
                    tamp1 = 1;
                    //cout<<"f3 "<<f3<<" f4 "<<f4<<endl;
                    break;
                }
                if(tamp1  == 1)
                    break;
                }
                //cout<<"IDHAR"<<endl;
                if(f1<p+1 && f2<q+1){
                    //cout<<"ethe"<<endl;
                    fs1.push_back(f1);
                    fs2.push_back(f2);
                }
                else{
                    //cout<<"uthe"<<endl;
                    fs1.push_back(f3);
                    fs2.push_back(f4);
                }
            }
            else{
                while(dp[p-1][q]==i || dp[p][q-1] == i){
                        if(dp[p-1][q] == i)
                            p--;
                        else if(dp[p][q-1] == i)
                            q--;
                    }
                //cout<<p<<" "<<q<<endl;
                fs1.push_back(p);
                fs2.push_back(q);
                p--;
                q--;
                //cout<<p<<endl;
            }
    }
    //cout<<fs1.size()<<" "<<fs2.size()<<endl;
    //cout<<"here2"<<endl;
    int xy = 0;
    int te2 = 0;
    for(int i = 1; i <= dp[n-1][m-1]; i++){
        //cout<<"in"<<endl;
        int x = fs1.back();
        fs1.pop_back();
        int y = fs2.back();
        fs2.pop_back();
        //cout<<x<<" "<<y<<" "<<endl;
        //cout<<"xy "<<xy<<" te2 "<<te2<<endl;
        while(xy != x && xy<s1.size()){
            cout<<s1.at(xy);
            xy++;
        }
        while(te2 != y && te2<s2.size()){
            cout<<s2.at(te2);
            te2++;
        }
        xy = x+1;
        te2 = y+1;
        cout<<s1.at(x);
    }

    while(xy< s1.size() ){
        cout<<s1.at(xy);
        xy++;
    }
    while(te2< s2.size() ){
        cout<<s2.at(te2);
        te2++;
    }
    cout<<endl;
}

int main(){
    while(cin.eof()==0){
        string s1,s2;
        cin >> s1 >> s2;
        solution(s1,s2);
        //cout<<s1<<" "<<s2;
    }
}
