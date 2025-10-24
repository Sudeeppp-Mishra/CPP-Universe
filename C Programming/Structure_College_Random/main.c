//
//  main.c
//  Structure_College_Random
//
//  Created by Sudeep De Mishra on 29/02/2024.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    struct student
    {
        char name[20];
        int roll;
        float marks;
    }st1, *ptr;
    ptr=&st1;
    printf("Enter name:");
    scanf("%[^\n]",&(*ptr).name);
    printf("Enter roll:");
    scanf("%d",&(*ptr).roll);
    printf("Enter marks:");
    scanf("%f",&(*ptr).marks);
    printf("Name is:%s",ptr->name);
    printf("\nRoll is:%d",ptr->roll);
    printf("\nMarks is:%f",ptr->marks);
    return 0;
}
