#include <stdio.h>

int main() {
    float num;
    
    do {
        printf("Enter a positive number: ");
        scanf("%f", &num);
        
        if (num <= 0) {
            printf("That's not a positive number. Try again.\n");
        }
    } while (num <= 0);
    
    printf("Thank you! You entered a valid positive number: %.2f\n", num);
    
    return 0;
}