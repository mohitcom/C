#include <stdio.h>

int main() {
    int maxLimit, t1 = 0, t2 = 1, nextTerm = 0;
    printf("Enter the maximum number for the series: ");
    scanf("%d", &maxLimit);

    printf("Fibonacci Series: %d, %d", t1, t2);
    nextTerm = t1 + t2;

    while (nextTerm <= maxLimit) {
        printf(", %d", nextTerm);
        t1 = t2;
        t2 = nextTerm;
        nextTerm = t1 + t2;
    }
    printf("\n");
    return 0;
}