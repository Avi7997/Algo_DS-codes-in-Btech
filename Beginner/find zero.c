#include<stdio.h>
int main()
{
long long int a,b,c=0,i,j,k,temp,ans=0;
scanf("%lld",&a);
b=a%10;
a=a-b;
temp=a;
for(i=0;temp>9;a++)
{
    temp=temp/10;
    c++;
}
    for(i=0,j=10;i<c;i++)
    {
        if(i==0)
        {k=a/j;
        ans=ans+k*2;
        j=j*10;
        }
        else
        {
            k=a/j;
            ans=ans+k;
            j=j*10;
        }
    }
    if(b==5 || b==6 || b==7 || b==8 || b==9)
    {
        ans=ans+1;
    }
    printf("%lld",ans);
    return 0;

}
