#include<bits/stdc++.h>
using namespace std;
bool cmp(string s1,string s2){
    return s1<s2;
}
int main(){
    ifstream is("input.txt");
    ofstream of("output.txt");
    vector<string> v1;
    string temp;
    int i;
    while(is.eof()==0){
        is>>temp;
        v1.push_back(temp);
    }
    sort(v1.begin(),v1.end(),cmp);
    for(i=0;i<v1.size();i++)
        of<<v1[i]<<endl;
    return 0;
}
