#include<stdio.h>
int main()
{
long long int t,i,j,k,c,l,a,v;
int flag=0,z;
char bab[100],aja[100];
    char temp,avi;
    scanf("%lld\n",&t);
for(i=0;i<t;i++)
    {

    gets(bab);
    strcpy(aja,bab);
    j=strlen(bab);
    flag=0;
        for(k=j-1;k>0;k--)
        {
            for(l=k;l<=j-1;l++)
            {
                if(bab[l]>bab[k-1])
                {
                    c=k-1;
                    flag=1;
                    break;
                }
            }
            if(flag==1)
               {
                   break;
               }
        }
        for(a=k;a<=j-2;a++)
        {
            for(v=a+1;v<=j-1;v++)
            {
                if(bab[a]>bab[v])
                {
                    temp=bab[a];
                    bab[a]=bab[v];
                    bab[v]=temp;
                }
            }
        }
        for(a=k;a<=j-1;a++)
        {
            if(bab[k-1]<bab[a])
            {
                avi=bab[k-1];
                    bab[k-1]=bab[a];
                    bab[a]=avi;
                    break;
            }
        }

        z=strcmp(aja,bab);
        if(z==1 || z==0)
        {
            printf("no answer\n");
        }
          else
                puts(bab);
          if(i==t-1)
            break;

    }
return 0;
}
