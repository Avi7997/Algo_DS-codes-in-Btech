#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, t;
    cin >> n >> t;
    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        x = 86400 - x;
        t = t - x;
        if(t <= 0){
            cout << i+1;
            break;
        }
    }
}
