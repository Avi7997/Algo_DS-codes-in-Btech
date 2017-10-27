#include <iostream>
using namespace std;

int main()
{
    int t,n;
    cin>>t;
    for(int i=0;i<t;i++)
    {
    	int temp=0;
    	cin>>n;
    	while(n!=0)
    	{
    		if(n%2==1)
    		{
    			temp=temp+1;
    		}

    		n=n/2;
    	}
    	cout<<temp;
    }
    return 0;
}
