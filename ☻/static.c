#include<stdio.h>

void display();
int main()
{
    display();
    display();
    display();
}

void display()
{
    static int a=3;
    printf("\t%d",a);
    a++;
}