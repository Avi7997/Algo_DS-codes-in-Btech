#include<stdio.h>
#include<conio.h>
struct node{
int data;
struct node *link;
};
void in(int pos,int data)
{
    struct node *temp=(node*)malloc(sizeof(node));
    temp->data=data;
    temp->link=NULL;
        if(pos==1)
            {temp->link=A;
             A=temp;}
   else{ struct node *temp1=A;
        for(int i=0;i<pos-2;i++)
        {
            temp1=temp1->link;
        }
        temp->link=temp1->link;
        temp1->link=temp;}
}
int main()
{
    int ch;
    struct node *A;
    A=NULL;
    struct node *temp=(node*)malloc(sizeof(node));
    temp->data=2;
    temp->link=NULL;
    A=temp;
    do
    {
        printf("\n enter your choice");
        printf("\n 1.want to enter a data");
        printf("\n 2.want to delete data");
        printf("\n 3.exit");
        printf("\n 4.print linked list")
        scanf("%d",&ch);
                   switch(ch)
            {
                case 1:
                 int no,val;
                scanf("%d %d",&no,&val);
                in(no,val);
                break;
                case 2:

            }
    }
    while(ch!=3);


}
