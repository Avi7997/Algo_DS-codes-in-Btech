#include<stdio.h>
int main()
{
long long int n,k,i,j,l,p,rus,q=1,count=0,avi[100000],aja[100000],c=0;
scanf("%lld %lld",&n,&k);
for(i=0;i<n;i++)
    {
    scanf("%lld",&avi[i]);
    }
    for(i=0;i<n;i++)
    {
    scanf("%lld",&aja[i]);
    }
            for(i=0;i<n;i++)
                {
                for(j=i+1;j<n;j++)
                {
                if(avi[i]>avi[j])
                    {
                    l=avi[j];
                    avi[j]=avi[i];
                    avi[i]=l;
                    }
                }
                }
                 for(i=0;i<n;i++)
                {
                for(j=i+1;j<n;j++)
                {
                if(aja[i]>aja[j])
                    {
                    l=aja[j];
                    aja[j]=aja[i];
                    aja[i]=l;
                    }
                }
                }
                    int flag=0;
                        for(i=0;i<n;i++)
                        {

                            for(j=c,c=0;j<n;j++)
                            {
                                flag=0;
                                rus=avi[i]-aja[j];
                                printf("%lld\n",rus);
                                if(rus<=k && rus>=(-k))
                                {
                                    c=j;
                                    count++;
                                     if(j==n-1)
                                    {
                                      flag=1;
                                    }
                                    printf("%lld",count);


                                }
                                if(flag==1)
                                {
                                    break;
                                }

                            }
                            if(flag==1)
                                break;
                        }

printf("%lld",count);
return 0;

}
