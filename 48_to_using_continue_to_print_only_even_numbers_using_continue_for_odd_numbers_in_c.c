#include <stdio.h>

int main() {
    int limit;
    
    printf("Print even numbers up to: ");
    scanf("%d", &limit);
    
    printf("Even numbers: ");
    for (int i = 1; i <= limit; i++) {
        if (i % 2 != 0) {
            continue; // Skip the rest of the loop for odd numbers
        }
        printf("%d ", i);
    }
    printf("\n");
    
    return 0;
}