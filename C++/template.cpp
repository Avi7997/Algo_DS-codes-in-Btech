#include<bits/stdc++.h>
using namespace std;

template<class T>
T max(T *av,int size)
{
   T max=av[0];
    for(int i=1;i<size;i++)
    {
    if(av[i]>max)
        max=av[i];
    }
    return max;
}

int main()
{
    int av[5];
    cout<<"Enter integers to find maximum"<<endl;
    for( int i=0;i<5;i++)
        cin>>av[i];

    int ans=max(av,5);
    cout<<"Maximum number is = "<<ans<<endl;

        float va[5];

    cout<<"Enter floats to find maximum"<<endl;
    for( int i=0;i<5;i++)
        cin>>va[i];

    float ans1=max(va,5);
    cout<<"Maximum float is = "<<ans1<<endl;

}
