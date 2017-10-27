#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <conio.h>
#include <algorithm>
using namespace std;

void winner(unsigned long long int n)
{
    int count=0;
    while(n!=1)
    {
        unsigned long long int dil=n^(n-1);
        if(dil==(2*n-1))
            {

            n=n/2;
            cout<<n<<endl;
            count++;
        }
        else
         {
            unsigned long long int temp=n;
            int co2=0;
            cout<<"In";
            while(temp!=1 && temp!=0) //6070205350162300895 562949953421312 9034272882268244365
            {
                    temp=temp/2;   /*16665401330435388198
10318396182076207593
245699880918337095
16404706719976314525
9631232913369401239
262144
17592186044416*/
                    co2++;
            }
            n=co2;
            cout<<co2<<endl;
            count++;
        }
    }
    if(count%2==1)
        {
        cout<<"Louise"<<endl;
    }
    else{cout<<"Richard"<<endl;}
}
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        unsigned long long int n;
        cin>> n;
        winner(n);
    }
    return 0;
}
