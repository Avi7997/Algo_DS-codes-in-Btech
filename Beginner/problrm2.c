#include<stdio.h>
#include<conio.h>
#define MAX 10
int front1=-1,rear1=-1,front2=-1,rear2=-1;
int queue1[MAX],queue2[MAX];
void display();
void enqueue(int *,int,int *, int *);
int dequeue(int *,int *, int *);

int main()
{
int choice,ele,temp;
    printf("\n1. Push");
    printf("\n2. Pop");
    printf("\n3. Display");
    printf("\n4. Exit");

do
    {
    printf("\nEnter your choice ");
    scanf("%d",&choice);

    switch(choice)
	{
	case 1:
	if(rear1>=MAX-1)
	    {
	    printf("\nStack Overflow");
	    break;
	    }

	printf("\nEnter the element to insert ");
	scanf("%d",&ele);
	if(front1==-1)
	    {
	    front1=rear1=0;
	    queue1[rear1]=ele;
	    break;
	    }
	else
	    {
	    enqueue(queue2,ele,&front2,&rear2);

	    while((front1<=rear1)&&(front1!=-1))
		{
		temp=dequeue(queue1,&front1,&rear1);
		enqueue(queue2,temp,&front2,&rear2);
		}

	    while((front2<=rear2)&&(front2!=-1))
		{
		temp=dequeue(queue2,&front2,&rear2);
		enqueue(queue1,temp,&front1,&rear1);
		}
	    }
	    break;
	case 2: if(front1==-1&&rear1==-1)
		printf("\nStack Underflow");
	    else
		{
		ele=dequeue(queue1,&front1,&rear1);
		printf("\nDeleted Element from stack= %d",ele);
		}
	    break;
	case 3: display();
	}
    }while(choice!=4);
getch();
}

int dequeue(int *Q,int *f, int *r)
    {
    int ele;
    if(*f==*r)
	{
	ele=*(Q+*f);
	*f=-1;
	*r=-1;
	}
    else
	{
	ele=*(Q+*f);
	(*f)++;
	}
    return(ele);
    }

void enqueue(int *Q,int ele,int *f, int *r)
    {
    if(*r>=MAX-1)
	{
	printf("\nStack Overflow");
	return;
	}
    if(*f==-1)
	{
	(*f)++;
	}
    (*r)++;
    *(Q+*r)=ele;
    }

void display()
    {
    int i;
    if(front1==-1&&rear1==-1)
	printf("\nStack Underflow");
    else
	{
	printf("\nElements in Stack are \n");
	for(i=rear1;i>=front1;i--)
	    {
	    printf("%d ",queue1[i]);
	    }
	}
    }
