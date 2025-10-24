#include<stdio.h>
#include<stdlib.h>

int main()
{
    int i,n;
    printf("Enter no. of integers to be stored:");
    scanf("%d",&n);
    int *ptr=(int*)malloc(n*sizeof(int));
    if(ptr==NULL)
    {
        printf("Memory Not Available");
        exit(1);
    }
    printf("Enter %d no.s:",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",ptr+i);
    }
    printf("\nEntered no.s are:\n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",*(ptr+i));
    }
}