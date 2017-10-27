#include<iostream>
#include<string.h>
using namespace std;
int convert(char x)
{
    return x;
}
int fac(int x)
{
    if(x==1)return 1;
    else return x*fac(x-1);
}
int main()
{
    cout<<"Enter number of strings you want to enter"<<endl;
    int no;
    cin>>no;
    string st[no];

    char s[no][15];
    for(int i=0;i<no;i++)
    {
        cin>>s[i];

    }
        for(int i=0;i<no;i++)
        {
            cout<<s[i]<<endl;
        }
            for(int i=0;i<no;i++)
            {
                st[i]=s[i];
            }
    int len[no];
                for(int i=0;i<no;i++)
                {
                    len[i]=strlen(s[i]);
                }
                    for(int i=0;i<no;i++)
                    {
                        cout<<len[i];
                    }
    char ch[no][720];
    for(int i=0;i<no;i++)
    {

    }

}
