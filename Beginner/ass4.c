#include<stdio.h>
#include<conio.h>
struct node
{
float coef;
int pow;
struct node* link;
};
struct node* start1 = NULL;
struct node* start2 = NULL;
struct node *create_po(struct node *);
struct node *insert_sorted(struct node *);
struct node *insert_beg(struct node *,int,float);
struct node *add_po(struct node *,struct node *);
struct node *mul_po(struct node *,struct node *);


int main()
{
    int ch,ch1;
    do
    {
    printf("Application Menu: \n");
    printf("1. Basic Procedures on single polynomial \n");
    printf("2. Add two polynomial \n");
    printf("3. Multiply polynomial with real number \n");
    printf("4. Multiplication of two Polynomal \n");
    printf("5. Print a Polynomal \n");
    printf("6. Exit \n");
    printf("Enter your choice \n");
    scanf("%d",&ch);
    switch(ch)
        {
        case 1:
            start1=create_po(start1);
                            printf("\n Want any procedure on this polynomial? Yes=1 No=0");

               printf("\n 1.Insert another term");
                printf("\n 2.Remove term");
            scanf("%d",&ch1);
            do
            {

                printf("\n 1.Insert another term");
                printf("\n 2.Remove term");
                switch(ch1)
                {
                case 1:
                start1=insert_sorted(start1);
                break;
                }
                printf("\n Want any procedure on this polynomial? Yes=1 No=0");
                scanf("&d",ch1);
            }
            while(ch1!=0);
            break;
        }
    }
    while(ch!=6);
    getch();
}
struct node *create_po(struct node *start)
{
 int po;
 float coe;
 int choice=1;
 printf("\n Enter the Polynomial");
 printf("\n To end Polynomial enter 'n' ");
 printf("\n Enter the terms:");
 while(choice==1)
    {
     printf("\n Enter power of x \n");
     scanf("%d",&po);
     printf("\n Enter coefficient of x \n");
     scanf("%f",&coe);
     struct node *new_node=(struct node *)malloc(sizeof(struct node *));
     new_node->coef=coe;
     new_node->pow=po;
        if(start==NULL)
        {
            new_node->link=NULL;
            start=new_node;
        }
        else
        {
            new_node->link=start;
            start=new_node;
        }
     printf("\n Want to add another term? Enter 0 or 1 1=Yes 0=No \n");
     scanf("%d",&choice);
    }
 return start;
}
struct node *insert_beg(struct node *start,int po,float co)
{
    struct node *new_node=(struct node *)malloc(sizeof(struct node *));
    new_node->coef=co;
    new_node->pow=po;
    new_node->link=start;
    start=new_node;
    return start;
}
struct node *insert_sorted(struct node *start)
{
 struct node *new_node,*ptr,*preptr;
    int po;
    float co;
    printf("\n Enter power of x \n");
     scanf("%d",&po);
     printf("\n Enter coefficient of x \n");
     scanf("%f",&co);
     new_node->coef=co;
     new_node->pow=po;
     ptr=start;
     while(new_node->pow>ptr->pow && new_node->pow==ptr->pow)
     {
         preptr=ptr;
         ptr=ptr->link;
         if(ptr==NULL)
            break;
     }
        if(ptr==start && new_node->pow>ptr->pow)
        {
            new_node->link=start;
            start=new_node;
        }
        else {if(ptr->pow==new_node->pow)
        {
            ptr->coef=ptr->coef+new_node->coef;
        }
        else if(new_node->pow>ptr->pow)
        {
           if(ptr=NULL)
            {preptr->link=new_node;
            new_node->link=NULL;}
            else
            {
                new_node->link=ptr;
                preptr->link=new_node;
            }
        }
        }
        return start;
}
struct node *add_po(struct node *no1,struct node *no2,struct node *ans)
{
   struct node *ptr1,*ptr2;
   ans=copy_po(ans,no1);
   ptr1=no2;
   while(ptr1!=NULL)
   {
       ans=insert_sorted2(ans,ptr1->pow,ptr1->coef);
       ptr1=ptr1->link;
   }
}
