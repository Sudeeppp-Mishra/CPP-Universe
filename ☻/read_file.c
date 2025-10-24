#include<stdio.h>

int main()
{
    FILE *fptr;
    fptr=fopen("second.txt","W");

    if(fptr==NULL)
    {
        printf("Unable to open file!");
        exit(1);
    }

    char ch;
    while((ch=getchar())!='\n')
    {
        fputc(ch,fptr);
    }
    fclose(fptr);
}