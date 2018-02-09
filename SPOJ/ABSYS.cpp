//This program might not run in COdeBlocks but it will run
//perfectly on ideone and SPOJ

#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    string str1;
    getline(cin, str1);
    while(t>0){
        string str, str1;
        getline(cin, str1);
        getline(cin, str);

        int found = str.find("machula");
        int found1 = str.find("+");
        int found2 = str.find("=");
        //int i_hex = stoi (str,nullptr,10);
        //cout<<i_hex<<endl;;
        //cout<<found<<" "<<found1<<" "<<found2<<endl;
        int a, b, c;
        if(found < found1){
            b = stoi(str.substr(found1 + 2, found2 - found1 - 3), nullptr, 10);
            c = stoi(str.substr(found2 + 2, str.length() - found2 - 2), nullptr, 10);
            a = c - b;
        }
        else if(found > found2){
            a = stoi(str.substr(0, found1 - 1), nullptr, 10);
            b = stoi(str.substr(found1 + 2, found2 - found1 - 3), nullptr, 10);
            c = a + b;
        }
        else{
            a = stoi(str.substr(0, found1 - 1), nullptr, 10);
            c = stoi(str.substr(found2 + 2, str.length() - found2 - 2), nullptr, 10);
            b = c - a;
        }
        cout << a <<" + "<<b<<" = "<<c<<endl;
        t--;
    }
}
