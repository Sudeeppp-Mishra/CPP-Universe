//
//  main.c
//  number_Counting
//
//  Created by Sudeep De Mishra on 05/02/2024.
//

#include <stdio.h>

int count(int);
int main(int argc, const char * argv[]) {
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    printf("The no. of digits in %d is %d",n,count(n));
    return 0;
}

int count(int n){
    int c=0;
    while(n!=0){
        n%10;
        c++;
        n/=10;
    }
    return c;
}
