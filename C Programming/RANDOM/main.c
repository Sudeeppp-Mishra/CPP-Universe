//
//  main.c
//  RANDOM
//
//  Created by Sudeep De Mishra on 28/01/2024.
//

#include<stdio.h>
#include<string.h>

int main(void)
{
    char name[100][100], temp[100];
    printf("Enter total no. of names your want to sort:");
    int n;
    scanf("%d",&n);
    printf("Enter the names:");
    for(int i=0;i<n;i++)
    {
        gets(name[i]);
    }

    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(strcmp(name[i],name[j])>0)
            {
                strcpy(temp, name[i]);
                strcpy(name[i],name[j]);
                strcpy(name[j],temp);
            }
        }
    }

    for(int i=0;i<n;i++)
    {
        printf("%s\n", name[i]);
    }
}



