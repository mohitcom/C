#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, sum = 0, remainder;
    printf("Enter an integer: ");
    scanf("%d", &n);
    
    n = abs(n); // Handle negative numbers

    while (n != 0) {
        remainder = n % 10;
        sum += remainder;
        n /= 10;
    }

    printf("\nThe Sum of the digits is: %d\n", sum);
    return 0;
}