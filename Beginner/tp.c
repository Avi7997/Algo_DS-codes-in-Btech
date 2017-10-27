#include<stdio.h>
int main()
{
long long int n,k,i,j,temp;
long long int avi[100000],avp[100000];
scanf("%lld %lld",&n,&k);
    for(i=1;i<=n;i++)
    {
        scanf("%lld",&avi[i]);
    }
    for(i=1;i<=n-1;i++)
        {
        for(j=i+1;j<=n;j++)
            {
            if(avi[i]>avi[j])
                {
                temp=avi[i];
                avi[i]=avi[j];
                avi[j]=temp;
                }
            }
        }
        for(i=1;i<=n;i++)
        {
        printf("%lld\n",avi[i]);
        }
 return 0;
 }
