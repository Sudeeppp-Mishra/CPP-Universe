//
//  main.c
//  Palindrome
//
//  Created by Sudeep De Mishra on 05/02/2024.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int n, rem, rev=0;
    printf("Enter a no:");
    scanf("%d",&n);
    int temp=n;
    while(n!=0){
        rem=n%10;
        rev=rev*10+rem;
        n/=10;
    }
    if(temp==rev){
        printf("Palindrome no!");
    }
    else
    {
        printf("Not a palindrome no!");
    }
    return 0;
}
