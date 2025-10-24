#include<stdio.h>
#include<stdlib.h>
#define SIZE 5

int top=-1, stack[SIZE];
int data;


int is_full();
int is_empty();
void push();
int pop();
int peek();
int display();

int main()
{
    int opt;
    printf("\nEnter \n1 for Push \n2 for Pop \n3 for Peek \n4 for display \n5 for Exit:");
    scanf("%d",&opt);
    
    switch(opt)
    {
        case 1:
            printf("\nEnter the data:");
            scanf("%d",&data);
            push(data);
            break;
        case 2:
            printf("\n%d poped successfully!",pop());
            break;
        case 3:
            printf("\n%d",peek());
            break;
        case 4:
            display();
            break;
        case 5:
            exit(0);
            break;
        default:
            printf("Invalid input!");
    }
    return 0;
}

int is_full()
{
    if(top == SIZE - 1 )
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int is_empty()
{
    if(top==-1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

void push()
{
    if(is_full())
    {
        printf("Stack overflow!");
    }
    else
    {
        top++;
        stack[top]=data;
        printf("%d pushed successfully!",data);
    }
}

int pop()
{
    if(is_empty())
    {
        printf("Stack Underflow!");
        exit(0);
    }
    else
    {
        int deleted_item=stack[top];
        top--;
        return deleted_item;
    }
}

int peek()
{
    if(is_empty())
    {
        printf("Stack is empty!");
        exit(0);
    }
    else
    {
        return stack[top];
    }
}

int display()
{
    int i;
    if(is_empty())
    {
        printf("Stack is empty!");
        return 0;
    }
    else
    {
        for(i=0;i<=top;i++)
        {
            return stack[i];
        }
    }
}
