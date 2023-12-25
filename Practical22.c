#include <stdio.h>
int main() {
    int number1, number2;
    printf("Enter the first number: ");
    scanf("%d", &number1);
    printf("Enter the second number: ");
    scanf("%d", &number2);
    int holder = number1;
    number1 = number2;
    number2 = holder;
    printf("After swapping number1 = %d, number2 = %d\n", number1, number2);
    return 0;
}

