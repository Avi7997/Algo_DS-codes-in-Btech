
#include<stdio.h>
#include<conio.h>
#define MAX 10
int front1=-1,rear1=-1,front2=-1,rear2=-1;
int queue1[MAX],queue2[MAX];
void display();
void enqueue(int *,int *,int *,int *,int *,int *,int);
int dequeue(int *,int *,int *,int *, int *,int *);
void push(int *,int *,int *,int);

int main()
{
int choice,val,temp;

    do
    {
    printf("\n\t1. Push");
    printf("\n\t2. Pop");
    printf("\n\t3. Peek");
    printf("\n\t4. Display");
    printf("\n\t5. Exit");
    printf("\nEnter your choice= ");
    scanf("%d",&choice);

    switch(choice)
        {
        case 1:
            printf("\n Enter the number to be inserted in to the Stack \n");
            scanf("%d",&val);
            enqueue(queue1,queue2,&front1,&front2,&rear1,&rear2,val);
            break;
        case 2:
                val=dequeue(queue1,queue2,&front1,&front2,&rear1,&rear2);
                printf("\n the value deleted from Stack is : %d \n",val);
                break;
        case 3:
                printf("\n The value stored at the peek of Stack is : %d \n ",val);
                break;
        case 4:
                display();
                break;
        }
    }while(choice!=5);
getch();
return 0;
}

void enqueue(int *q1,int *q2,int *f1,int *f2, int *r1,int *r2,int val)
{
    if(*r1==-1 && *r2!=-1)
    {
        (*r2)++;
        *(q2+*r2)=val;
    }
    else if(*r2==-1 && *r1!=-1)
    {
        (*r1)++;
        *(q1+*r1)=val;
    }
    else if(*r1==-1 && *r2==-1)
    {
        (*r1)++;
        (*f1)++;
        *(q1+*r1)=val;
    }
}
void display()
{
    int i;
    if(front1==-1 && front2==-1)
        printf("\n Stack is empty \n");
    else if(front1!=-1 && front2==-1)
    {
        printf("\n no1 %d %d",front1,rear1);
        for(i=front1;i<=rear1;i++)
        {
            printf("\t %d",queue1[i]);
        }
    }
     else if(front1==-1 && front2!=-1)
    {
        printf("\n no2 %d %d",front2,rear2);
        for(i=front2;i<=rear2;i++)
        {
            printf("\t %d",queue2[i]);
        }
    }
}
void push(int *q,int *f,int *r,int av)
{
    if(*f==-1 && *r==-1)
    {
        (*f)=(*r)=0;
        (*q)=av;

    }
    else
    {
        (*r)++;
        *(q+*r)=av;
    }
}
int dequeue(int *q1,int *q2,int *f1,int *f2, int *r1,int *r2)
{
    int i,temp,val,flag=0;
    if(*r1==-1 && *r2==-1)
    {
      printf("\n Stack is Empty \n");
      return -1;
    }
    else if(*r1!=-1)
    {
        for(i=(*f1);(*f1)!=(*r1);i++)
        {
            temp=*(q1+i);
            push(queue2,&front2,&rear2,temp);
        }
        val=queue1[i];
        (*f1)=(*r1)=-1;
        flag==1;
        return val;
    }
      else if(flag==0)
    {
        for(i=*f2;*f2!=*r2;i++)
        {
            temp=queue2[i];
            push(queue1,&front1,&rear1,temp);
        }
        val=queue2[i];
        front2=rear2=-1;
        return val;
    }
}
