#include<stdio.h>
#include<malloc.h>
#include<conio.h>
struct link{
   float coeff;
   int pow;
   struct link *next;
   };
struct link *poly1=NULL,*poly2=NULL,*poly=NULL;
void polyadd(struct link *poly1,struct link *poly2,struct link *poly);
void polymul(struct link *n1, struct link *n2, struct link *n);
void create(struct link *node);
void show(struct link *node);
void mulwithreal(struct link *poly1);

 main()
  {
  int op;
  char ch;
  do{
  poly1=(struct link *)malloc(sizeof(struct link));
  poly2=(struct link *)malloc(sizeof(struct link));
  poly=(struct link *)malloc(sizeof(struct link));
  printf("\n\n Application Menu\n1.Create Polynomial \n2.Multipy polinomial with real number\n3.Addition of 2 polynomial\n4.Multiplication of 2 polynomial\n0.Exit\nEnter your choice:");
  scanf("%d",&op);
  switch(op)
  {
        case 1:
            create(poly);
            printf("\n Your Polynomial is:");
            show(poly);
            break;
        case 2:
            create(poly1);
            mulwithreal(poly1);
            show(poly1);
            break;
        case 3:
            printf("\n\nenter 1st polynomial:");
            create(poly1);
            printf("\n\nenter 2nd polynomial:");
            create(poly2);
            printf("\n1st Polynomial:\t");
            show(poly1);
            printf("\n2nd Polynomial:\t");
            show(poly2);
            polyadd(poly1,poly2,poly);
            printf("\nAdded polynomial:\t");
            show(poly);
            break;

        case 4:
            printf("\n\nenter 1st polynomial:");
            create(poly1);
            printf("\n\nenter 2nd polynomial:");
            create(poly2);
            printf("\n\n1st Polynomial:\t");
            show(poly1);
            printf("\n\n2nd Polynomial:\t");
            show(poly2);
            polymul(poly1,poly2,poly);
            printf("\n\nMultiplied polynomial:\t");
            show(poly);
            break;

        }

  }
  while(op);
}
void create(struct link *node)
{
 char ch;
 do
 {
  printf("\n\nenter coeff:");
  scanf("%f",&node->coeff);
  printf("\nenter power:");
  scanf("%d",&node->pow);
  node->next=(struct link*)malloc(sizeof(struct link));
  node=node->next;
  node->next=NULL;
printf("\ncontinue? y=yes n=no:");
ch=getch();
}
while(ch=='y' || ch=='Y');
}

void show(struct link *node)
{
while(node->next!=NULL)
{

printf("%.2fx^%d",node->coeff,node->pow);
node=node->next;
if(node->next!=NULL)
printf(" + ");
}
}

void polyadd(struct link *poly1,struct link *poly2,struct link *poly)
{
 while(poly1->next &&  poly2->next)
 {
  if(poly1->pow>poly2->pow)
  {
   poly->pow=poly1->pow;
   poly->coeff=poly1->coeff;
   poly1=poly1->next;
   }
  else if(poly1->pow<poly2->pow)
  {
   poly->pow=poly2->pow;
   poly->coeff=poly2->coeff;
   poly2=poly2->next;
   }
  else
  {
   poly->pow=poly1->pow;
   poly->coeff=poly1->coeff+poly2->coeff;
   poly1=poly1->next;
   poly2=poly2->next;
   }
  poly->next=(struct link *)malloc(sizeof(struct link));
  poly=poly->next;
  poly->next=NULL;
 }
 while(poly1->next || poly2->next)
 {
  if(poly1->next)
  {
   poly->pow=poly1->pow;
   poly->coeff=poly1->coeff;
   poly1=poly1->next;
   }
  if(poly2->next)
  {
   poly->pow=poly2->pow;
   poly->coeff=poly2->coeff;
   poly2=poly2->next;
   }
   poly->next=(struct link *)malloc(sizeof(struct link));
   poly=poly->next;
   poly->next=NULL;
   }
}

void polymul(struct link *n1, struct link *n2, struct link *n)
{
    struct link * n2beg=n2;

            while (n1!=NULL)
            {
                    struct link * temp=(struct link *)malloc(sizeof(struct link));
                    temp->next=NULL;
                    n2=n2beg;
                    while (n2!=NULL)
                    {
                            temp->coeff = n1->coeff * n2->coeff;

                            temp->pow = n1->pow + n2->pow;

                            n2 = n2->next;
                            temp->next=(struct link *)malloc(sizeof(struct link));
                            temp=temp->next;
                            temp->next=NULL;

                    }

                    polyadd(temp,n,n);
                    n1 = n1->next;
                    free(temp);
            }
}
void mulwithreal(struct link *poly1)
{
	float n;
	printf("\nEnter Real no. to multiply\n");
	scanf("%f",&n);
	while(poly1!=NULL)
	{
		poly1->coeff=poly1->coeff*n;
		poly1=poly1->next;
	}
}
