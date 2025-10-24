//
//  main.c
//  HCF_LCM
//
//  Created by Sudeep De Mishra on 29/01/2024.
//

#include <stdio.h>

int main(void){
    int n1,n2,i,min,HCF,LCM;
    printf("Enter two no.s:");
    scanf("%d%d",&n1,&n2);
    min=n1<n2?n1:n2;
    for(i=min;i>=1;i--){
        if(n1%i==0 && n2%i==0){
            HCF=i;
            break;
        }
    }
    printf("HCF=%d",HCF);
    int max=n1>n2?n1:n2;
    while(1){
        if(max%n1==0 && max%n2==0){
            LCM=max;
            break;
        }
        max++;
    }
    printf("\nLCM=%d",LCM);
}


