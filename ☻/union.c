//Fibonacci Series in the range m to n

#include <stdio.h>

int fibonacci(int n) {
    if (n <= 1)
    {
        return n;
    }
    else
    {
    return fibonacci(n-1) + fibonacci(n-2);
    }
}

void fibonacci_range(int m, int n) {
    int i = 0;
    while (fibonacci(i) <= n) {
        if (fibonacci(i) >= m)
            printf("%d ", fibonacci(i));
        i++;
    }
}

int main() {
    int m,n;
    printf("Enter the range low and high respectively:");
    scanf("%d%d",&m,&n);
    printf("Fibonacci series within the range [%d, %d]: ", m, n);
    fibonacci_range(m, n);
    printf("\n");
    return 0;
}
