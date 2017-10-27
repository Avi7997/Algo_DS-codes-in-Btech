#include<bits/stdc++.h>
using namespace std;
set<string> s1,s2,temp;
void make_sub(string s,set<string> &so)
{
    so.erase(so.begin(),so.end());
    int len=s.length();
    for(int i=0;i<len;i++){
        for(int j=0;j<len-i;j++)
        {
            string temp;
            for(int c=j;c<=j+i;c++){
                //cout<<"here"<<endl;
                temp=temp+s[c];
            }
            so.insert(temp);
        }
    }
}
void sol()
{
    temp.erase(temp.begin(),temp.end());
    for(set<string> :: iterator it=s1.begin();it!=s1.end();it++){
        if(find(s2.begin(),s2.end(),*it)!=s2.end()&&s2.empty()==false){
           // cout<<"will be erases : "<<*it<<endl;
                temp.insert(*it);
        }
    }
    s1 = temp;
}
int main()
{
    int n;
    scanf("%d",&n);
    string str[n];
    for(int i=0;i<n;i++){
        cin>>str[i];
    }
    make_sub(str[0],s1);
    for(int i=1;i<n;i++){
        make_sub(str[i],s2);
        sol();

    vector<string> v;
    int max=-1;
    if(s1.empty()==false)
    {
        for(set<string>::iterator it=s1.begin();it!=s1.end();it++){
            int len=(*it).length();

            if(len>max){
                max=len;
                v.erase(v.begin(),v.end());
                v.push_back(*it);
            }
            else if(len==max){
                v.push_back(*it);
            }

        }
        for(vector<string> ::iterator it=v.begin();it!=v.end();it++)
            cout<<*it<<endl;
    }
    else
    {

        cout<<"NO match!"<<endl;
    }
}
}
