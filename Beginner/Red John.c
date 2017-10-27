#include<stdio.h>
#include<math.h>
int main()
{
double mac,mac1=1,mac2=1;
long long int temp;
long long int t,n[20],i,j,v,iva,d,c,k,l,m,avi,flag,party;
scanf("%lld",&t);
for(i=0;i<t;i++)
{
scanf("%lld",&n[i]);
}
    for(i=0;i<t;i++)
    {
       temp=0;
       avi=0;
        if(n[i]>=4)
        {


            for(k=1,v=4,c=1;k<=(n[i]/4);k++)
            {

                j=n[i]-v;
                mac=1;
                mac1=1;
                mac2=1;
                for(d=(j+c);d>0;d--)
                {
                    mac=mac*d;
                }
                 for(d=j;d>0;d--)
                {
                    mac1=mac1*d;
                }
                 for(d=c;d>0;d--)
                {
                    mac2=mac2*d;
                }
                party=mac/(mac1*mac2);
                temp=temp+party;
                v+=4;
                c++;
            }
            temp=temp+1;


                for(l=1,iva=3;l<=(temp/2);l++)
                {

                    flag=0;
                    for(m=2;m<iva;m++)
                    {
                        if(iva%m==0)
                        {
                            flag=1;
                            break;

                        }
                    }
                    iva+=2;
                    if(flag==0)
                    {
                        avi++;
                    }
                }
                avi=avi+1;
            printf("%lld\n",avi);
        }
        else
        {
         temp=n[i];
        if(n[i]==1 || n[i]==2)
            printf("0 \n");
        if(n[i]==3)
            printf("1 \n");
        }
    }
    return 0;
}
