#include<stdio.h>

int main()
{
    char ch[]="ENGINEER";
    for(int i=8;i>0;i--)
    {
        for(int j=0;j<i;j++)
        {
            printf("%c",ch[j]);
        }
        printf("\n");
    }
}