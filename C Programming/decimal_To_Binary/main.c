//
//  main.c
//  decimal_To_Binary
//
//  Created by Sudeep De Mishra on 06/02/2024.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int a[10],n,i;
    printf("Enter a decimal no:");
    scanf("%d",&n);
    for(i=0;n>0;i++){
        a[i]=n%2;
        n/=2;
        
    }
    printf("\nBinary No. is:");
    for(i=i-1;i>=0;i--){
        printf("%d",a[i]);
    }
    return 0;
}

/*
#include<stdio.h>

int main(void){
    int n, sum=0, rem, rem1,temp;
    printf("Enter a no:");
    scanf("%d",&n);
    temp=n;
    while(n!=0){
        rem=n%2;
        sum=sum*10+rem;
        n/=2;
    }
    int rev=0;
    while(sum!=0){
        rem1=sum%10;
        rev=rev*10+rem1;
        sum/=10;
    }
    printf("Binary of %d is %d",temp,rev);//This logic is wrong for 8, 2 like no.s because it gives o/p 1 for 8 i.e., not taking the zeros.
}
*/
