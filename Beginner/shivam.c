#include<stdio.h>
int main()
{
int i,j,k,l,m;
for(i=0;i<10;i++)
    {
    for(j=0;j<10;j++)
        {
          for(k=0;k<10;k++)
          {
           for(l=0;l<10;l++)
                {
                for(m=0;m<10;m++)
                        {
                        if((((i*1000)+(j*100)+(k*10)+l)*m)==((l*1000)+(k*100)+(j*10)+i) && i!=j && j!=k && k!=l && l!=m)
                            {
                            printf("%d %d %d %d %d",i,j,k,l,m);
                            break;
                            }
                        }
                }
          }
        }
    }
    return 0;
}
