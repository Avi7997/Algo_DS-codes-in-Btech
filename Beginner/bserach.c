#include<stdio.h>
int bsearch(int a,int arr[],int lo,int hi)
{
int mid=(lo+hi)/2;
if(arr[mid]==a)
return a;
else if(lo==hi)
{
    printf("Number doesn't exist");
    return 0;
}
else if(arr[mid]<a)
bsearch(a,arr,mid+1,hi);
else if(arr[mid]>a)
bsearch(a,arr,lo,mid-1);
}
