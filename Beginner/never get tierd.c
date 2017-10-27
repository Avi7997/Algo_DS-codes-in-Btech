#include<stdio.h>
int main()
{
long long int n,k,i,j,l,p,q=1,count=0,avi[100000],aja[100000],flag;
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

                                for(j=0;j<n;j++)
                                {
                                    for(p=q+1;p<n;p++)
                                    {
                                            if(p==n)
                                        {
                                            flag=1;
                                        }
                                        if((-k)<=(avi[j]-aja[p])<=k)
                                        {
                                            count++;
                                            q=p;
                                            break;
                                        }

                                    }
                                    if(flag==1)
                                        break;
                                }
printf("%lld",count);
return 0;

}
