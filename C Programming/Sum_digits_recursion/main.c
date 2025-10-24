//
//  main.c
//  Sum_digits_recursion
//
//  Created by Sudeep De Mishra on 10/02/2024.
//

#include <stdio.h>

int palindrome(int);
int main(int argc, const char * argv[]) {
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    printf("Sum of digits is:%d", palindrome(n));
    return 0;
}

int palindrome(int n){
    int rem;
    static int sum=0;
    if (n!=0){
        rem=n%10;
        sum+=rem;
        palindrome(n/10);
    }
    return sum;
}
