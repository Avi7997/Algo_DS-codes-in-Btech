#include<stdio.h>
int main()
{
long long int p,t,r,s,n[10],i,j,k;
scanf("%lld",&t);
for(i=0;i<t;i++)
    {
    scanf("%lld",&n[i]);
    }
for(i=0;i<t;i++)
{
    for(p=2,j=0,r=(n[i]);p<=(n[i]+2);p++)
    {
        if(p%2==0)
        {
                k=n[i]-j;
                printf("%lld %lld\n",j,k);
                j++;

        }
        if(p%2!=0)
        {
                s=n[i]-r;
                printf("%lld %lld\n",r,s);
                r--;
        }
    }

}
return 0;
}
