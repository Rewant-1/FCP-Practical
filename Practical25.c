#include <stdio.h>
int main() {
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);
    printf("Original value: %d\n", number);
    int *ptr = &number; 
    (*ptr)++;
    printf("Updated value: %d\n", number);
    return 0;
}

