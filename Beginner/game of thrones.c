#include<stdio.h>
int main()
{
char avi[100000];
int k[26]={0};
long long int i,j,count1=0,count2=0,l;
gets(avi);
strlwr(avi);
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
        if(k[i]%2!=0)
        count2++;
   }
   if(count2==1)
   {
       printf("YES");
   }
   else
   {
       printf("NO");
   }
return 0;
}
