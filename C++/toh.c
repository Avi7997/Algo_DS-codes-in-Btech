#include<stdio.h>
#include<time.h>
toh(int,char,char,char);
int main()
{
int n;
clock_t t1,t2;
printf("Enter no of disks \n");
scanf("%d",&n);
t1=clock();
toh(n,'A','C','B');
  t2 = clock();

    float diff = ((float)(t2 - t1));
    printf("\n time taken is %f",(diff/CLOCKS_PER_SEC)*1000);
return 0;
}

toh(int n,char sou,char des,char spare)
{
if(n==1)
printf("\n move %c from %c",sou,des);
else
    {
        toh(n-1,sou,spare,des);
        toh(1,sou,des,spare);
        toh(n-1,spare,des,sou);
    }
}
