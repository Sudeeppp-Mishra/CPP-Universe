#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n,i;
    printf("Enter no. of integers/blocks:");
    scanf("%d",&n);
    int *ptr=(int*)calloc(n, sizeof(int));//it is equivalent to / int * ptr=(int*)calloc(n*sizeof(int));
    if(ptr==NULL)
    {
        printf("Memory not available!");
        exit(1);
    }
    printf("Enter integers:");
    for(i=0;i<n;i++)
    {
        scanf("%d",ptr+i);
    }
    printf("Entered integers are:");
    for(i=0;i<n;i++)
    {
        printf("%d\t",*(ptr+i));
    }
}