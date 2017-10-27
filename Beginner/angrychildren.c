#include<stdio.h>
int main()
{
long long int n,k,i,j,temp;
long long int avi[100000],avp[100000],z,flag=0;
scanf("%lld %lld",&n,&k);
    for(i=0;i<n;i++)
    {
        scanf("%lld",&avi[i]);
    }
    for(i=0;i<n-1;i++)
        {
        for(j=i+1;j<n;j++)
            {
            if(avi[i]>avi[j])
                {
                temp=avi[i];
                avi[i]=avi[j];
                avi[j]=temp;
                }
            }
        }
   for(i=0;i<n-k-1;i++)
   {
       avp[i]=avi[i+k-1]-avi[i];
       if(avp[i]==(k-1))
        {
        z=avp[i];
        flag=1;
        break;
        }
   }
   if(flag==0)
   {
   for(i=1;i<n-k-1;i++)
   {
       if(avp[0]>avp[i])
       {
         avp[0]=avp[i];
       }
   }
   printf("%lld",avp[0]);
   }
   else if(flag==1)
    {
    printf("%lld",z);
   }

return 0;
}
