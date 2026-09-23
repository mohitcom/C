#include <stdio.h>

int main() {
    int num, isPrime = 1;
    
    printf("Enter a positive integer: ");
    scanf("%d", &num);
    
    if (num <= 1) {
        isPrime = 0; // 0 and 1 are not prime numbers
    } else {
        // Loop from 2 to the square root of the number
        for (int i = 2; i * i <= num; i++) {
            if (num % i == 0) {
                isPrime = 0; // Divisible by a number other than 1 and itself
                break;
            }
        }
    }
    
    if (isPrime) {
        printf("%d is a prime number.\n", num);
    } else {
        printf("%d is not a prime number.\n", num);
    }
    
    return 0;
}