#include<iostream>
using namespace std;

void test(int x)
{
    try
    {
        if(x==0) throw 0;
else if(x==1) throw 0.1;
else if(x==-1) throw 'a';

    }
    catch(int)
    {
    throw;
    }
    catch(double)
    {
throw;    }
    catch(char)
    {
throw;    }
}

int main()
{
   try{
    test(1);}
    catch(double)
    {
        cout<<"Caught double inside main"<<endl;

    }
    try{test(0);}
    catch(int)
    {
        cout<<"Caught int inside main"<<endl;

    }
    try{test(-1);}
    catch(char)
    {
        cout<<"Caught char inside main";

    }
}
