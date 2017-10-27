
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct node
{
    char word[50];
    int occurance;
    struct node * link;
}node;

node * memory();
int main()
{
    FILE * f;
    char  str[50],name[50];
    node * head=NULL;
    node * new;
    printf("\nThe file location which u enter must be there where this c program is saved\n");
    printf("Enter your File name \n");
    scanf("%s",name);
    f=fopen(name,"r");
    if(f==NULL)
        printf("Unable to Open");
    else
    {
        while(!feof(f))
        {
            fscanf(f,"%s ",str);

           if(head==NULL)
            {
                new=memory();
                strcpy(new->word,str);
                new->occurance=1;
                new->link=NULL;
                head=new;
            }

            else
            {
                node * p=head;
                node * prev;
                int comp,flag=0;
                while(p!=NULL)
                {
                    comp=strcmp(str,p->word);
                    if(comp==0)
                    {
                        p->occurance++;
                        flag=1;
                        break;

                    }
                    else if(comp<0&&p==head)
                    {
                        new=memory();
                        strcpy(new->word,str);
                        new->occurance=1;
                        new->link=head;
                        head=new;
                        flag=1;
                        break;
                    }
                    else if(comp<0&&p!=head)
                    {
                        new=memory();
                        strcpy(new->word,str);
                        new->occurance=1;
                        new->link=p;
                        prev->link=new;
                        flag=1;
                        break;

                    }
                        prev=p;
                        p=p->link;

                }
                if(flag==0)
                {
                     new=memory();
                        strcpy(new->word,str);
                        new->occurance=1;
                        new->link=NULL;
                        prev->link=new;
                }

            }

        }

        fclose(f);

        node * p=head;
        while(p->link!=NULL)
        {
            printf("%s(%d)\n",p->word,p->occurance);
            p=p->link;
        }
        printf("%s(%d)\n",p->word,p->occurance);
    }
return 0;
}
node * memory()
{
    node * new;
    new=(node*)malloc(sizeof(node));
    return new;
}
