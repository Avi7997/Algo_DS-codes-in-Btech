#include<conio.h>
#include<stdio.h>
#define MAX 10
int top1=-1;
int top2=-1;
int st1[MAX],st2[MAX];
void push(int [],int);
int pop(int []);
void insert_ele(int [],int);
int delete_ele(int [],int []);
void dis_queue(int [],int []);
void dis_stack(int[]);
int peek(int [],int []);
int main()
{
int val,option;
do
    {
     printf("\n \n ******* Main Menu ******");
     printf("\n 1. Insert an element");
     printf("\n 2. Delete an element");
     printf("\n 3. Peek");
     printf("\n 4. Display the Queue");
     printf("\n 5. Exit");
     printf("\n \n Enter your Choice \n");
     scanf("%d",&option);
     switch(option)
            {
            case 1:
                printf("\n Enter the number to be inserted in to the Queue \n");
                scanf("%d",&val);
                insert_ele(st1,val);
                break;
            case 2:
                val=delete_ele(st2,st1);
                printf("\n the value deleted from queue is : %d",val);
                break;
            case 3:
                val=peek(st2,st1);
                printf("\n The value stored at the peek of queue is : %d ",val);
                break;
            case 4:
                dis_queue(st1,st2);
                break;
            }
    }
    while(option!=5);
    getch();
    return 0;
}
void insert_ele(int st1[],int val)
{
    if(top1==MAX-1)
    {
        printf("\n queue Underflow");
    }
    else{
        top1++;
        st1[top1]=val;
    }
}
int delete_ele(int st2[],int st1[])
{
   int val1,val2;
    if(top2==-1 && top1!=-1)
    {
        while(top1!=-1)
        {
            val1=pop(st1);
            push(st2,val1);
        }
        val2=st2[top2];
        top2--;
        return val2;
    }
    else if(top2==-1 && top1==-1)
    {
        printf("\n Queue Underflow");
        return -1;
    }
    else if(top2!=-1)
    {
        val2=st2[top2];
        top2--;
        return val2;
    }
}
void push(int st2[],int val)
{
    top2++;
    st2[top2]=val;
}
int pop(int st1[])
{
    int val;
    val=st1[top1];
    top1--;
    return val;
}
void dis_queue(int st1[],int st2[])
{
     int i;
        if(top2==-1 && top1==-1)
        printf("\n Queue is Empty");
        else
        {
          printf("\n");
          if(top2!=-1)
           {for(i=top2;i>=0;i--)
                printf("\t %d",st2[i]);}
            if(top1!=-1)
            {for(i=0;i<=top1;i++)
            printf("\n %d",st1[i]);}
        }
}
int peek(int st2[],int st1[])
{
   int val;
    if(top2==-1 && top1==-1)
        {printf("\n Queue is empty ");
        return -1;}
    else if(top1!=-1)
    {
        val=st1[top1];
        return val;
    }
    else{
        val=st2[0];
        return val;
    }

}


