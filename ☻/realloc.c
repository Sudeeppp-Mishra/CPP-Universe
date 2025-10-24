#include<stdio.h>
#include<stdlib.h>

int main(){
    int n,i;
    printf("Enter no. of integers:");
    scanf("%d",&n);
    int *ptr=(int*)malloc(n*sizeof(int));
    if(ptr==NULL){
        printf("Memory not available");
        exit(1);
    }
    printf("Enter the datas:");
    for(i=0;i<n;i++){
        scanf("%d",ptr+i);
    }
    int temp;
    printf("Enter new size:");
    scanf("%d",&temp);
    ptr=(int*)realloc(ptr,temp*sizeof(int));
    if(ptr==NULL)
    {
        printf("Memory Not available!");
        exit(1);
    }
    printf("Enter new datas:");
    for(i=n;i<temp;i++)
    {
        scanf("%d",ptr+i);
    }
    printf("The datas are:\n");
    for(i=0;i<temp;i++)
    {
        printf("%d\t",*(ptr+i));
    }
    free(ptr);
    ptr==NULL;
}