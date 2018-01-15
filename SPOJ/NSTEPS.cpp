#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t>0){
        int x,y;
        cin >> x>> y;
        if(x==y || x-2 == y){
            if(x==y && x%2==0)
                cout<<2*x<<endl;
            else if(x==y)
                cout<<2*(x-1)+1<<endl;
            else if(x-2 == y && x%2 == 0)
                cout<<2*(x-1)<<endl;
            else
                cout<<2*(x-2)+1<<endl;
        }
        else
            cout<<"No Number"<<endl;
        t--;
    }
}


