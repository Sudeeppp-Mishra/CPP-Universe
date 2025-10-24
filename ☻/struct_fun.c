#include<stdio.h>

struct student
{
    char name[100];
    int roll;
};

void function(struct student ar[10]);
int main()
{
   struct student ar[10];
    function(ar);
}

void function(struct student ar[10])
{
    int i;
    for(i=0;i<4;i++)
    {
        printf("Enter name and roll:");
        scanf("%s%d",ar[i].name,&ar[i].roll);
    }
    for(i=0;i<4;i++)
    {
        printf("\n%s\t%d\n",ar[i].name,ar[i].roll);
    }
}