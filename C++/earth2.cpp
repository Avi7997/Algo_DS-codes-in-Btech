#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
    	int n;
    	cin>>n;
    	int arr[n];
    	for(int j=0;j<n;j++)
    	{
    		cin>>arr[j];
    	}
        if(n<=1)
            cout<<arr[0]<<endl;
        else
            cout<<"0"<<endl;
    }
    return 0;
}
