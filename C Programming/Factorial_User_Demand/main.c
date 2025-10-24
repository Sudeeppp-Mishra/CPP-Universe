//
//  main.c
//  Factorial_User_Demand
//
//  Created by Sudeep De Mishra on 05/02/2024.
//

#include <stdio.h>

void fact(void);
void continued(void);
int main(int argc, const char * argv[]) {
    fact();
    return 0;
}

void fact(void){
    int n;
    printf("Enter a no:");
    scanf("%d",&n);
    int fact=1, i;
    for(i=1;i<=n;i++){
        fact*=i;
    }
    printf("%d!=%d\n",n,fact);
    continued();
}

void continued(void){
    char ch;
top:
    printf("Do you want to continue (y/n)?");
    scanf(" %c",&ch);
    if(ch=='y' || ch=='Y'){
        fact();
    }
    else if(ch=='n'||ch=='N'){
        printf("Have a nice day!");
    }
    else{
        printf("!!Enter y or Y for yes and n or N for No!!\n");
        goto top;
    }
}
