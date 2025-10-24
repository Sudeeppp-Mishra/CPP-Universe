#include<stdio.h>
#include<stdlib.h>

int main()
{
    FILE *fp;
    fp=fopen("student.txt","w");
    if(fp==NULL)
    {
        printf("Unable to open file");
        exit(1);
    }
    char name[100];
    int marks;
    printf("Enter name and roll of n no. of students respectively:");
    while(scanf("%s%d",name,&marks)!=EOF)
    {
        fprintf(fp,"%s\t%d\n",name,marks);
    }
    fclose(fp);

    fp=fopen("student.txt","r");
    while(fscanf(fp,"%s%d",name,&marks)!=EOF)
    {
        printf("%s\t%d\n",name,marks);
    }
    fclose(fp);
    
}