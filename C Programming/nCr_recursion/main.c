//
//  main.c
//  nCr_recursion
//
//  Created by Sudeep De Mishra on 10/02/2024.
//

#include <stdio.h>

int fact(int);
int main(int argc, const char * argv[]) {
    int n,r;
    printf("Enter n and r:");
    scanf("%d%d",&n,&r);
    int nCr=(fact(n))/((fact(n-r))*fact(r));
    printf("%dC%d=%d",n,r,nCr);
    return 0;
}

int fact(int x){
    if(x==1 || x==0){
        return 1;
    }
    else{
        return x*fact(x-1);
    }
}
