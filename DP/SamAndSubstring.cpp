#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    cin >> str;
    long int n = str.length(), temp = 1;
    long int mod = 1000000007, ans = 0, prev = 0;
    //cout << str[3]-'0';

    for(long int i = 0; i < n; i++){
        //cout << "hey"<<endl;
        ans = (ans * 10) % mod;
        ans = (ans + ((i+1) * (str[i] - '0'))) % mod;
        prev = (prev+ans) % mod;
        //temp = (temp * 2) % mod;
    }
    cout << prev;
}
