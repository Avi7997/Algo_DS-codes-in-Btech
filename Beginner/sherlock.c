#include<stdio.h>
#include<math.h>
int main()
{
int i,j,k,l,m,a,c=0,d;
float b;
scanf("%d",&i);
    for(j=1;j<=i;j++)
    {
    scanf("%d %d",&l,&m);
        if(l>=m)
        {
        for(k=m;k<=l;k++)
            {b=sqrt(k);
        a=sqrt(k);
            if(a==b)
            {
            c++;
            }}
        printf("%d \n",c);

        }
        else if(l<m)
         {
        for(k=l;k<=m;k++)
            {b=sqrt(k);
        a=sqrt(k);
            if(a==b)
            {
            c++;
            }}
        printf("%d \n",c);

        }
        c=0;
    }
    return 0;
}
