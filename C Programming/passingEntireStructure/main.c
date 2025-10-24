//
//  main.c
//  passingEntireStructure
//
//  Created by Sudeep De Mishra on 29/02/2024.
//

#include <stdio.h>

struct student
{
    char name[100];
    int roll;
}s1;

void function(struct student s);
int main(int argc, const char * argv[]) 
{
    printf("Enter name and roll:");
    scanf("%s %d",&s1.name,&s1.roll);
    function(s1);
    return 0;
}

void function(struct student s)
{
    printf("Name and roll are:%s and %d",s.name,s.roll);
}
