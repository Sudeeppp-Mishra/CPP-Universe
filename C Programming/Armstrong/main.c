//
//  main.c
//  Armstrong
//
//  Created by Sudeep De Mishra on 18/02/2024.
//

#include <stdio.h>
#include <math.h>

//Function Declaration
int armstrong(int n);

int main(int argc, const char * argv[]) {
    // insert code here...
    int n,x;
    
    printf("Enter a number:");
    scanf("%d",&n);
    x=armstrong(n);

    if(x==n){
        printf("%d is an armstrong no",n);
    }
    else{
        printf("%d is not an armstrong no",n);
    }
    return 0;
}

int armstrong(int n){
    int y, p, sum=0;
    
    if(n==0){
        return 0;
    }
    else{
        y=n%10;
        n=n/10;
        p=pow(y,3);
        sum=sum+p;
        return (sum+armstrong(n));
    }
}
