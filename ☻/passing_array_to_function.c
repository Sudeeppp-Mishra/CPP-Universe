#include<stdio.h>

void function(int a[100]);
int main()
{
    int a[100];
    for(int i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    function(a);
}

void function(int a[100])
{
    int i;
    for(i=0;i<5;i++)
    {
        printf("\n%d",a[i]);
    }
}