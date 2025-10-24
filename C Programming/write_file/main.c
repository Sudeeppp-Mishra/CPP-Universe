//
//  main.c
//  write_file
//
//  Created by Sudeep De Mishra on 28/03/2024.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    FILE *fptr;
    fptr=fopen("first.txt","w");
    char ch;
    printf("Enter anything you want:");
    while((ch=getchar())!=EOF)
    {
        putc(ch,fptr);
    }
    fclose(fptr);
}
