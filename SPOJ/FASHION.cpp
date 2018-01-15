#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t>0){
        int n;
        cin >>n;
        int ar[n],ar2[n];
        for(int i =0; i<n;i++)
            cin>>ar[i];
        for(int i=0;i<n;i++)
            cin>>ar2[i];
        sort(ar,ar+n);
        sort(ar2,ar2+n);
        int ans =0;
        for(int i=0;i<n;i++)
            ans += ar[i]*ar2[i];
        cout<<ans<<endl;
        t--;
    }
}
