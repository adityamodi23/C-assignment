#include <stdio.h>
#include <math.h>

long long factorial(int n) {
    long long fact = 1;
    for(int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

int isPrime(int n) {
    if(n <= 1)
        return 0;
    for(int i = 2; i <= n / 2; i++) {
        if(n % i == 0)
            return 0;
    }
    return 1;
}

int main() {
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    // a) Square root
    if(n >= 0)
        printf("Square root = %.2f\n", sqrt(n));
    else
        printf("Square root not defined for negative numbers\n");

    // b) Square
    printf("Square = %d\n", n * n);

    // c) Cube
    printf("Cube = %d\n", n * n * n);

    // d) Check prime
    if(isPrime(n))
        printf("Number is Prime\n");
    else
        printf("Number is Not Prime\n");

    // e) Factorial
    if(n >= 0)
        printf("Factorial = %lld\n", factorial(n));
    else
        printf("Factorial not defined for negative numbers\n");

    // f) Prime factors
    printf("Prime factors: ");
    for(int i = 2; i <= n; i++) {
        while(n % i == 0) {
            printf("%d ", i);
            n /= i;
        }
    }

    return 0;
}




