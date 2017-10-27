#include<iostream>
using namespace std;
int m=5;
int main()
{
int m=10;
cout<<"In a main block m="<<m<<endl;
    {
    int m=20;
    cout<<"Inside a first block:"<<endl<<"Local m="<<m<<endl<<"Global m="<<::m<<endl;
        {
        int m=30;
        cout<<"Inside a second block:"<<endl<<"Local m="<<m<<endl<<"Global m="<<::m<<endl;
        }
    }
    cout<<"Back to main block: "<<::m<<endl;
}
N
