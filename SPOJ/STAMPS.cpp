#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    int i = 1;
    while(t>0){
        int a,b;
        cin >> a >>b;
        int ar[b];
        for(int j = 0; j<b; j++){
            cin >> ar[j];
        }
        sort(ar,ar+b,greater<int>());
        /*for(int j = 0; j<b; j++){
            cout<< ar[j]<<" ";
        }*/
        cout<<endl;
        int flag =0;
        int ans;
        for(int j = 0; j < b; j++){
            a = a - ar[j];
            if(a<=0){
                flag = 1;
                ans = j+1;
                break;
            }
        }
        cout<<"Scenario #"<<i<<":"<<endl;
        if(flag==1){
            cout<<ans<<endl;
        }
        else
            cout<<"impossible"<<endl;
        cout<<endl;
        t--;
        i++;
    }
}
