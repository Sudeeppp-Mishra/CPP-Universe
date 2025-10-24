
#include <stdio.h>
#include<string.h>
#define n 10

struct student
{
    char name[100];
    int roll;
};
int main() {
    struct student ar[n], temp;
    int size,i,j;
    
    printf("Enter the size:");
    scanf("%d",&size);

    printf("Enter the name and roll of students:\n");
    
    for(i=0;i<size;i++)
    {
        scanf("%s%d",ar[i].name,&ar[i].roll);
    }

    for(i=0;i<size;i++)
    {
        for(j=i+1;j<size;j++)
        {
            if(strcmp(ar[i].name,ar[j].name)>0)
            {
                temp=ar[i];
                ar[i]=ar[j];
                ar[j]=temp;
            }
        }
    }

    printf("The sorted structure is:\n");

    for(i=0;i<size;i++)
    {
        printf("\n%s\t%d\n",ar[i].name,ar[i].roll);
    }
}