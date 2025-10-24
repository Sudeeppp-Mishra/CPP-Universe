#include<stdio.h>

int main(){
    int num, sum=0, i;
    printf("Enter a number:");
    scanf("%d",&num);
    for(i=1;i<num;i++) {
        if(num%i==0) {
            sum+=i; //Gets the sum of all possible divisors of the given no
        }
    }
    if(sum==num) {
        printf("Perfect No!!");
    }
    else {
        printf("Not a perfect no!");
    }
    return 0;
}