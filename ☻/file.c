#include<stdio.h>

struct student
{
    char name[100];
    int roll;
};

int main()
{
    struct student s[10];
    FILE *fp;
    fp=fopen("test.txt","w");
   // if(fp==NULL)
    //{
      //  printf("File can't be opened!");
        //exit(1);
    //}
    int i;
    for(i=0;i<4;i++)
    {
        printf("Enter name and roll:");
        scanf("%s%d",s[i].name,&s[i].roll);
        fprintf(fp,"%s%d",s[i].name,s[i].roll);
    }
    fclose(fp);
    fp=fopen("test.txt","r");
    for(i=0;i<4;i++)
    {
        fscanf(fp,"%s%d",s[i].name,&s[i].roll);
        printf("%s\t%d\n",s[i].name,s[i].roll);
    }
    fclose(fp);
}