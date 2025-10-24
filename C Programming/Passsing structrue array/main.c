/*
 1!-3!+5!-7!+11!...
*/
#include<stdio.h>

int fact(int);
int main()
{
    int terms, sum=0, i, a=0;
    printf("Enter no. of terms:");
    scanf("%d",&terms);
    for(i=1;i<=terms;i++)
    {
        if(i%2==0)
        {
            sum=sum-fact(2*a+1);
        }
        else
        {
            sum=sum+fact(2*a+1);
        }
        a++;
    }
    printf("Sum=%d",sum);
}

int fact(int n)
{
    double fact=1, i;
    for(i=1;i<=n;i++)
    {
        fact*=i;
    }
    return fact;
}
