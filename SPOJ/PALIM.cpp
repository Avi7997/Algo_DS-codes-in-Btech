#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t>0){
        string str;
        cin>>str;
        int len = str.length();
        int flag =0;
        for(int i =0; i<len;i++){
            if(str[i]!='9'){
                flag=1;
                break;
            }
        }
        string str1(str.begin(), str.begin()+(len/2));
        string str2(str.begin()+((len+1)/2), str.end());
        reverse(str2.begin(),str2.end());
        cout<<str1<<" "<<str2<<endl;
        cout<<flag<<endl;
        if(flag==0){
            cout<<pow(10,len)+1<<endl;
        }
        else{
            if(str1.compare(str2)<0)
                cout<<"Ahead is small"<<endl;
            else if(str1.compare(str2)==0)
                cout<<"Same"<<endl;
            else
                cout<<"Behind is small"<<endl;
        }
        t--;
    }
}
