#include<stdio.h>
#include<string.h>
int main()
{
long long int i,j,k[30]={0},n,sum=0,l;
char avi[101];
scanf("%lld",&n);
scanf("%s",&avi);
l=strlen(avi);
for(i=0;i<=25;i++)
   {
       for(j=0;j<l;j++)
       {
           if(i+97==avi[j])
           k[i]++;
        }
   }
   for(i=0;i<26;i++)
   {
      long long int lsum=0;
       for(j=0;k[i]>0;j++)
       {
            lsum=lsum+k[i];
            k[i]=k[i]-1;
       }
       sum=sum+lsum;
   }



   printf("%lld",sum);
   return 0;
}
