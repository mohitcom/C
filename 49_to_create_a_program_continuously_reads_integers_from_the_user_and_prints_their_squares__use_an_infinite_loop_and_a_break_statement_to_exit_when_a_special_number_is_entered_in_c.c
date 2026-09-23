#include <stdio.h>

int main() {
    int num;
    
    printf("Enter integers to find their squares (enter -1 to exit):\n");
    
    while (1) { // 1 represents true, creating an infinite loop
        printf("Enter number: ");
        scanf("%d", &num);
        
        if (num == -1) {
            printf("Exiting program...\n");
            break; // Breaks out of the infinite loop
        }
        
        printf("Square of %d is %d\n", num, num * num);
    }
    
    return 0;
}