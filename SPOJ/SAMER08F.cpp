#include<bits/stdc++.h>
using namespace std;

int main(){
    int c;
    cin >> c;
    while(c!=0){
        int ans = 0;
        for(int i = 1; i<=c; i++)
             ans += i*i;
        cout<<ans<<endl;
        cin >> c;
    }
}
