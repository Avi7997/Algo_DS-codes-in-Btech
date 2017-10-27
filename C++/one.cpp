#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main()
{
string temp;
ifstream os("one.cpp");
    while(os.eof()==0)
    {
    os>>temp;
    cout<<temp<<endl;
    }
}
