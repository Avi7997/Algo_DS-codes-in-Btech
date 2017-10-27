#include<bits/stdc++.h>
using namespace std;

template<class T>
T max(T *a,int size)
{
   T max=a[0];
    for(int i=1;i<size;i++)
    {
    if(a[i]>max)
        max=a[i];
    }
}

int main()
{
    int av[]={12,36,45,32,26};
    int ans=max(av,5);
    cout<<ans;

}
