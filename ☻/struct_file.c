#include<stdio.h>
#include<stdlib.h>

typedef struct student{
    char name[100];
    int roll;
}student;

int main()
{
    FILE *fp;
    fp=fopen("stduent.txt","w");
    if(fp==NULL)
    {
        printf("Unable to open file");
        exit(1);
    }
    student s[10];
    int i;
    for(i=0;i<5;i++)
    {
        scanf("%s%d",s[i].name,&s[i].roll);
        fprintf(fp,"%s\t%d\n",s[i].name,s[i].roll);
    }
    printf("Students of roll 10 to 48 are:\n");
    for(i=0;i<5;i++){
        if(s[i].roll>=10 && s[i].roll<=48)
        {
            printf("%s\t%d\n",s[i].name,s[i].roll);
        }
    }
}
