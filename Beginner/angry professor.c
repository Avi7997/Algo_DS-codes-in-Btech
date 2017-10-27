#include<stdio.h>
int main()
{
int n,c,d;
int i,j,k=0;
long int a,b;
scanf("%ld\n",&n);
    for(i=1;i<=n;i++)
    {
    scanf("%ld %ld\n",&a,&b);
    int avi[1000];
        for(j=1;j<=a;j++)
        {
        scanf("%d",&avi[j]);
        if(avi[j]<=0)
            {
            k++;
            }
        }
            if(k>=b)
            {printf("NO\n");
            }
            else if(k<b)
            {printf("YES\n");}
            k=0;
    }
    return 0;
}
