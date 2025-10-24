//
//  main.c
//  roots_Of_Quadratic_Equation
//
//  Created by Sudeep De Mishra on 05/02/2024.
//

#include <stdio.h>
#include<math.h>

int main(int argc, const char * argv[]) {
    int a, b, c, d;
    printf("Enter the value of a, b, and c (Quadratic Equation:ax^2+bx+c):");
    scanf("%d%d%d",&a,&b,&c);
    d=(b*b)-(4*a*c);
    if(d>0){
        printf("Two roots are:\n r1=%f\n r2=%f\n",(float)(-b+d)/(2*(float)a), (float)(-b-d)/(2*(float)a));
    }
    else if(d==0){
        printf("Repeated root is:\n r1=r2=%d\n",(-b)/(2*a));
    }
    else{
        printf("Two imaginary roots are:\n r1=%f+i%f\n r2=%f-i%f\n",(-(float)b)/(2*(float)a),sqrt((-(float)d))/(2*(float)a),(-(float)b)/(2*(float)a),sqrt((-d))/(2*a));
    }
    return 0;
}
