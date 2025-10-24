#include<stdio.h>

int power(int,int);
int main()
{
    int n,p;
    printf("Enter n and p:");
    scanf("%d%d",&n,&p);
    printf("%d^%d=%d",n,p,power(n,p));
}
int power(int n,int p)
{
    if(p==1)
    {
        return n;
    }
    else if(p==0)
    {
        return 1;
    }
    else
    {
        return n*power(n,p-1);
    }
}