#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t>0){
        string str;
        cin >> str;
        vector<char> sta;
        for(int i = 0; i< str.length(); i++){
            if(str[i] == '(')
                sta.push_back(str[i]);
            else if(str[i] == ')'){
                while(sta.back() != '('){
                    cout<<sta.back();
                    sta.pop_back();
                }
                sta.pop_back();
            }
            else if(str[i] == '+' || str[i] == '-' || str[i] ==  '*' || str[i] ==  '/' || str[i] ==  '^')
                sta.push_back(str[i]);
            else
                cout<<str[i];
        }
        cout<<endl;
        t--;
    }
}
