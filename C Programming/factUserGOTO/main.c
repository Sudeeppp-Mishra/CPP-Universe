//
//  main.c
//  factUserGOTO
//
//  Created by Sudeep De Mishra on 08/01/2024.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    
top:
    printf("Enter a number:");
    int n,fact=1,temp;
    scanf("%d",&n);
    temp=n;
    while(n!=0){
        fact*=n;
        n-=1;
    }
    printf("%d!=%d",temp,fact);
    char ch;
    printf("\nDo you wish to continue(y/n)?");
    scanf(" %c",&ch);
    if(ch=='y'){
        goto top;
    }
    return 0;
}
