#include<iostream>
using namespace std;
template<class t>
class example
{
 t a,b;
public:
 void input()
 {
 cout<<"enter a and b"<<endl;
 cin>>a>>b;
 }
 void display()
 {
 cout<<"a= "<<a<<endl<<"b= "<<b<<endl;
 }
};
int main()
{
 cout<<"Integer class"<<endl;
 example<int> A;
 A.input();
 A.display();
 cout<<"Char class"<<endl;
 example<char> B;
 B.input();
 B.display();
 cout<<"Double class"<<endl;
 example<double> C;
 C.input();
 C.display();
 return 0;

 }
