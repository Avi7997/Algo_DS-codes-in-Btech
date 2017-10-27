#include<iostream>
using namespace std;

inline int square(int x)
{
return x*x;
}

int main()
{
cout<<"Enter a number to find square "<<endl;
int a;
cin>>a;
a=square(a);
cout<<a;
}
