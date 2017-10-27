#include<stdio.h>
#include<conio.h>
#define MAX 10
int st[MAX],top=-1;
void push(int st[],int val);
int pop(int st[]);
int peak(int st[]);
int display(int st[]);
int main()
{
    int val,option;
    char ch;
   do
   {
    printf("\n Give your choice");
    printf("\n1. push");
    printf("\n2. pop");
    printf("\n3. peak");
    printf("\n4. display\n");
    scanf("%d",&option);
        switch(option)
        {
                case 1:
                    printf("\nEnter value u want to add");
                    scanf("%d",&val);
                    push(st,val);
                    break;
                case 2:
                    val=pop(st);
                    printf("value which is removed %d",val);
                    break;
                case 3:
                    val=peak(st);
                    printf("value which is at top %d",val);
                    break;
                case 4:
                    display(st);
                    break;
        }
        scanf("%s",&ch);
        }
        while(ch=='y' || ch=='Y');
return 0;
}
void push(int st[],int val)
{
    if(top==MAX-1)
    {
        printf("STACK OVERFLOW");
    }
    else{
        top++;
        st[top]=val;
    }
}
int pop(int st[])
{
    int val;
    if(top==-1)
    {
        printf("\nSTACK UNDERFLOW");
        return 0;
    }
    else{val=st[top];
    top--;
    return val;}
}
int peak(int st[])
{
    if(top==-1)
    {
        printf("\nSTACK IS EMPTY");
        return 0;
    }
    else{
        int val;
        val=st[top];
        return val;
    }
}
int display(int st[])
{
    if(top==-1)
    {
        printf("\nSTACK IS EMPTY");
    }
    else{
        for(top=top;top>=0;top--)
        {
            printf("\n %d",st[top]);
        }
    }
}
