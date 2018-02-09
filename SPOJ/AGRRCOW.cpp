#include<bits/stdc++.h>
using namespace std;

int n,c;

int F(int x, int ar[]){
    int cows = 1, lastpos = ar[0];
    for(int i = 1; i <n;i++){
        if(ar[i]-lastpos >= x){
            if(++cows == c){return 1;}
            lastpos = ar[i];
        }

    }
    return 0;
}

int main(){
    int t;
    cin>>t;
    while(t>0){
        cin >> n >>c;
        int ar[n];

        for(int i=0;i<n;i++)
            cin>>ar[i];
        sort(ar,ar+n);
        int st = 0, end = ar[n-1]-ar[0]+1, mid;
        while(end-st>1){
            mid = (st+end)>>1;
            (F(mid,ar)?st:end) = mid;
        }
        cout<<st<<endl;
        t--;
    }
}
