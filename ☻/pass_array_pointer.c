//Passing array to function using pointer
#include<stdio.h>

void function(int *ptr, int size);
int main()
{
    int a[100], *ptr=a, size, i;
    printf("Enter the size:");
    scanf("%d",&size);
    printf("Enter the no.s:");
    for(i=0;i<size;i++)
    {
        scanf("%d",ptr+i);
    }
    function(ptr, size);
}

void function(int *ptr, int size)
{
    int i;
    for(i=0;i<size;i++)
    {
        printf("%d\n",*(ptr+i));
    }
}