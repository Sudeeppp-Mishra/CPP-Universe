//
//  main.c
//  prime_Or_Not_Using_Function
//
//  Created by Sudeep De Mishra on 05/02/2024.
//

#include <stdio.h>

int prime(int);
int main(int argc, const char * argv[]) {
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    if(prime(n)==1){
        printf("Prime No!!");
    }
    else{
        printf("Not a prime No!!");
    }
    return 0;
}

int prime(int x){
    int count=0, i;
    for(i=1;i<=x;i++){
        if(x%i==0){
            count++;
        }
    }
    if(count==2){
        return 1;
    }
    else{
        return 0;
    }
}
