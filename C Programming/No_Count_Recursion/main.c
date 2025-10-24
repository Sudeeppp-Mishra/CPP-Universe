//
//  main.c
//  No_Count_Recursion
//
//  Created by Sudeep De Mishra on 06/02/2024.
//

#include <stdio.h>

int count(int);
int main(int argc, const char * argv[]) {
    int n;
    printf("Enter a no:");
    scanf("%d",&n);
    printf("No of digits is %d",count(n));
    return 0;
}

int count(int n){
    static int c=0;
    if(n==0){
        return 1;
    }
    else{
        c++;
        count(n/10);
        return c;
    }
    
}
