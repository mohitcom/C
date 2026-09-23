#include <stdio.h>

int main() {
    int num, sum = 0, count;
    
    printf("How many numbers do you want to enter? ");
    scanf("%d", &count);
    
    for (int i = 1; i <= count; i++) {
        printf("Enter number %d: ", i);
        scanf("%d", &num);
        
        if (num < 0) {
            printf("Skipping negative number...\n");
            continue; 
        }
        
        sum += num;
    }
    
    printf("Total sum of positive numbers: %d\n", sum);
    
    return 0;
}