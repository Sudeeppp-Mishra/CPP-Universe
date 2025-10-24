//
//  main.c
//  factUserDemandUsingFunction
//
//  Created by Sudeep De Mishra on 08/01/2024.
//

#include <stdio.h>
int repeat(void);
int fact(void){
    int fact=1,n,temp;
    printf("Enter a number whose factorial is to be determined:");
    scanf("%d",&n);
    temp=n;
    while(n!=0)
    {
        fact=fact*n;
        n-=1;
    }
    printf("%d!=%d\n",n,fact);
    repeat();
    return 0;
}

int repeat(void){
    char ch;
    printf("Do you wish to continue(y/n)?");
    scanf(" %c",&ch);
    if(ch=='y'){
        fact();
    }
    return 0;
}

int main(int argc, const char * argv[]) {
    fact();
    return 0;
}
