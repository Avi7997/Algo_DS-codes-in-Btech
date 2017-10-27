#include<stdio.h>
struct student
{
    char name[50];
    int roll;
    int mark;
};
int main()
{
struct student s[10];
int i;
for(i=0;i<10;i++)
    {
    s[i].roll=i+1;

    scanf("%s",&s[i].name);
    scanf("%d",&s[i].mark);
    printf("info of studrnt roll nummberd %d \n",s[i].roll);    printf("%s\n",s[i].name);
    printf("%d\n",s[i].mark);
        }
}
