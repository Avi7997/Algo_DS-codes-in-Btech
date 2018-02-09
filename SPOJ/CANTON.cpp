#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t>0){
        long int a;
        cin>>a;
        cout<<"TERM "<<a<<" IS ";
        int i = 1;
        while(a>0){
            a = a-i;
            if(a<=0){
                a = a +i;
                break;
            }
            i++;
        }

        if(i%2 == 0){
            cout<<a<<"/"<<i-a+1<<endl;
        }
        else
            cout<<i-a+1<<"/"<<a<<endl;
        //cout<<a<<" "<<i<<endl;
        t--;
    }
}
