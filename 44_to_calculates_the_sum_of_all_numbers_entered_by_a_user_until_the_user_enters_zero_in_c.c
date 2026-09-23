#include <stdio.h>

int main() {
    float num, sum = 0.0;
    
    printf("Enter numbers to add (enter 0 to stop):\n");
    
    do {
        scanf("%f", &num);
        sum += num;
    } while (num != 0);
    
    printf("Total sum of entered numbers: %.2f\n", sum);
    
    return 0;
}