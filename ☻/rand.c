#include<stdio.h>

void function(int a[100]);
int main()
{
    int a[100];
    for(int i=0;i<4;i++)
    {
        scanf("%d",a+i);
    }
    function(a);
}
void function(int a[100])
{
   for(int i=0;i<4;i++){
        printf("%d\n",*(a+i));
    }
}