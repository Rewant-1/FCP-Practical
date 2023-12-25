#include <stdio.h>
void swap(int *a, int *b) {
    int holder = *a;
    *a = *b;
    *b = holder;
}
void novarswap(int *a, int *b) {
    *a = *a + *b;
    *b = *a - *b;
    *a = *a - *b;
}

int main() {
    int num1, num2;
    printf("Enter the first number: ");
    scanf("%d", &num1);
    printf("Enter the second number: ");
    scanf("%d", &num2);
    swap(&num1, &num2);
    printf("Using another variable: %d, %d\n", num1, num2);
    num1 = num1 - num2;
    num2 = num1 + num2;
    num1 = num2 - num1;
    novarswap(&num1, &num2);
    printf("Without using another variable: %d, %d\n", num1, num2);
    return 0;
}
