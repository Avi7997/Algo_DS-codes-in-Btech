#include<stdio.h>
#define N 1000
int count(int arr[],int m,int n)
{
	int tab[n+1][m];
	int i,j,x,y;
	for(i=0;i<m;i++)
		tab[0][i]=1;
	for(i=1;i<n+1;i++)
	{
		for(j=0;j<m;j++)
		{
			x=(i-arr[j]>=0)?tab[i-arr[j]][j]:0;
			y=(j>=1)?tab[i][j-1]:0;
			tab[i][j]=x+y;

		}
		printf("\n");
	}
	printf("\n");
	return tab[n][m-1];
}
int main()
{
	int arr[N],i,j,m=0,n=0;
	scanf("%d %d",&n,&m);
	for(i=0;i<m;i++)
    {
        scanf("%d",&arr[i]);
    }
	printf("%d\n",count(arr,m,n));
}
