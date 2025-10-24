//
//  main.c
//  C Programming
//
//  Created by Sudeep De Mishra on 06/01/2024.
//Program to takes total no. of DAYS from user and print the YEARS, MONTHS and DAYS in the total no. of DAYS

/*
#include <stdio.h>

int main(int argc, const char * argv[]) {
    int days;
    printf("Enter no. of days:");
    scanf("%d",&days);
    int years=days/365; //printf("%d",years);
    int remdays=days%365; //printf("\n%d",remdays);
    int months=remdays/30; //printf("\n%d",months);
    int remday=remdays%30; //printf("\n%d",remday);
    printf("Years=%d\nMonths=%d\nDays=%d",years,months,remday);
    return 0;
}
*/

#include<stdio.h>
#include<math.h>
#define TOL 0.001

double f(double x)
{
    return x*x-x-1;
}

double f_prime(double x)
{
    return 2*x-1;
}

int main()
{
    double x0, x1, f0, df0;
    int iteration = 0, maxIteration100;;
    do
    {
    printf("\nEnter your initial guess: ");
    scanf("%lf", x0);

    if(f_prime(x0)==0)
        printf("The derivative of the function at intial guess %f can't be zero...choose another guess!!", x0);
    
    else
        break;

    } while(f_prime(x0)==0);

    do
    {
        iteration++;
        x1 = x0 - f_prime(x0)/f(x0);

        if(f(x0)==0 || abs(f(x0))<0)
        {
            printf("\n%f is the Root!",x0);
        }
    } while (abs(f(x0))>=TOL);
    
}
