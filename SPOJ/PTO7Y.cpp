#include<bits/stdc++.h>
using namespace std;
int ar[10001];

int find1(int ar[], int a){
    if(ar[a] == -1)
        return a;
    return find1(ar, ar[a]);
}

bool union1(int ar[], int a, int b){
    int x = find1(ar,a);
    int y = find1(ar,b);
    if(x==y){
        return true;
    }
    else{
        ar[x] = y;
        return false;
    }
}

int main(){
    int n,m;
    cin >> n >>m;
    int flag = 0;
    memset(ar, -1, sizeof(ar));
    for(int i=0;i<m;i++){
        int a,b;
        cin>>a>>b;
        bool ans = union1(ar, a, b);
        if(ans){
            flag=1;
        }
    }
    if(flag==1)
        cout<<"NO";
    else
        cout<<"YES";

}
