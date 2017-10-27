#include<stdio.h>
#include<string.h>
int main()
{
long long int t,k,i,j;
char avi[100006];
scanf("%lld",&t);
for(i=0;i<t;i++)
    {
    scanf("%s",&avi);
    k=strlen(avi);
    for(j=0;j<k/2;j++)
        {
        if(avi[j]!=avi[k-j-1])
        {
            if(avi[j]==avi[k-j-2])
            {
                printf("%d\n",k-j-1);
            }
            else if(avi[j+1]==avi[k-j-1])
            {
                printf("%d\n",j);
            }
            break;
        }
        }
    }
    return 0;
}
