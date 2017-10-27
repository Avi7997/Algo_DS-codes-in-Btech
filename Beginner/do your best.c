#include<stdio.h>
int main()
{
long long int n,p,x,avi[100000],iva[100000],i,j,k=0,l;
scanf("%lld %lld %lld \n",&n,&p,&x);
    for(i=0;i<n;i++)
    {
    scanf("%lld",&avi[i]);
    }
    for(i=0;i<n;i++)
    {
        iva[i]=avi[i]*p;
        p=p-x;
    }
   j=iva[0];
    for(i=1;i<n;i++)
    {

        if(j<iva[i])
        {
            j=iva[i];
            k=i;
        }
    }
    printf("%lld",k+1);
    return 0;
}
