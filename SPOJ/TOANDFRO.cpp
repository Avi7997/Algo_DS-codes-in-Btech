#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >>n;
    while(n!=0){
        string str;
        cin >>str;
        int temp = 0;
        for(int i = 0; i<n;i++){
            int x = i;
            temp=0;
            while(x<str.length()){
                if(temp==0){
                    cout<<str[x];
                    x = x+((n-i)*2)-1;
                    temp=1;
                }
                else{
                    cout<<str[x];
                    x= x+i*2+1;
                    temp =0;
                }
            }
        }
        cout<<endl;
        cin>>n;
    }
}
