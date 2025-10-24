#include <stdio.h>
#include<math.h>

int main() {
    int binary, rem, decimal = 0, count = 0, original_binary;
    printf("Enter the binary equivalent: ");
    scanf("%d", &binary);
    original_binary = binary; // Store the original binary number

    while (binary != 0) {
        rem = binary % 10;
        decimal += rem * (pow(2, count)); 
        count++;
        binary /= 10;
    }

    printf("\nThe decimal equivalent of the binary number %d is %d\n", original_binary, decimal);
    return 0;
}