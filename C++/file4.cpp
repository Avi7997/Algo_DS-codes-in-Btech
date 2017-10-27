#include<iostream>
#include<fstream>
#include<conio.h>
using namespace std;
int main()
{
 ofstream objout("output.txt");
 int i,n;
 cout<<"ENTER LIMIT"<<endl;
 cin>>n;
 for(i=0;i<n;i++)
 {
 objout<<" "<<i;
 }
 objout.close();
 ifstream inobj("output.txt");
 while(!inobj.eof())
 {
 inobj>>i;
 cout<<i<<" ";
 }
 return 0;
}
