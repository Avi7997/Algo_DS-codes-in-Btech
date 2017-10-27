#include<iostream>
using namespace std;

void update(int &p,int &q)
{
    p=p+q;
    q=p-q;
}
 int main()
 {
     int a,b;
     cin>>a>>b;
     cout<<a<<" "<<b<<" "<<endl;
     update(a,b);
     cout<<a<<" "<<b<<" "<<endl;

 }
