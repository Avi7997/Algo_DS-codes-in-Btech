#include<stdio.h>
#include<conio.h>
int hcf(int a,int b);
main()
{
    int i,j,k,ans;
    printf("enter 2 numbers");
    scanf("%d %d",&i,&j);
    ans=hcf(i,j);
    printf("your ans is= %d",ans);
}
int hcf(int a,int b)
{
    int l,aa;
    for(l=1;l<=a;l++)
    {
     if(a%l==0 && b%l==0)
     aa=l;
    }
    return aa;
}
