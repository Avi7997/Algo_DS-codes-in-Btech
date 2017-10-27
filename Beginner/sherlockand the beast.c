#include<stdio.h>
#include<math.h>
int main()
{
int t,stnf=1;
 long long int n,i,j,k,ap,av;
scanf("%d",&t);
for(i=1;i<=t;i++)
    {
    scanf("%lld",&n);
   if(n==1||n==2||n==4||n==7)
   {
       printf("-1");
   }
      else
      {
          for(j=0;j<n;j++)
        {
        for(k=0;k<n;k++)
            {
                if(n==((3*k)+(5*j)))
                {
                   stnf=0;
                    av=k;
                    ap=j;
                    break;
                }
            }
            if(stnf==0)
            {
                break;
            }
        }
       if(av>0){ for(j=1;j<=3*av;j++)
        {
            printf("5");
        }
       }
        if(ap>0){
                for(j=1;j<=5*ap;j++)
        {
            printf("3");
        }
        }
      }
        printf("\n");
av=0;
ap=0;
stnf=1;
    }
    return 0;
}
