#include<iostream>
using namespace std;

class A{

public:
int a,b;

public:
int sum();
A(int x,int y){a=x;b=y;}

};

int A::sum()
{
int ans;
ans=a+b;
return ans;
}
int main()
{
A a(10,20);
int ans=a.sum();
cout<<"a="<<a.a<<" b="<<a.b<<" "<<ans;
}
