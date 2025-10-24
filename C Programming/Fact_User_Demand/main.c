//
//  main.c
//  Fact_User_Demand
//
//  Created by Sudeep De Mishra on 08/01/2024.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int n, temp;
    char repeat='y';
    while(repeat=='y'){
        int fact=1;
        printf("Enter the no. whose factorial is to be determined:");
        scanf("%d",&n);
        temp=n;
        while(n!=0){
            fact=fact*n;
            n-=1;
        }
        printf("%d!=%d",temp,fact);
        printf("\nDo you wish to continue (y/n)?");
        scanf("%c",&repeat);
    }
    return 0;
}
