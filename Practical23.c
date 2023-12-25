#include <stdio.h>

int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    int *ptr = arr; 
    printf("a. Increasing:\n");
    printf("Original value: %d\n", *ptr);
    ptr++; 
    printf("Now %d\n\n", *ptr);
    ptr = arr;
    printf("b. Decreasing:\n");
    ptr += 2; 
    printf("Original value: %d\n", *ptr);
    ptr--; 
    printf("Now: %d\n\n", *ptr);
    ptr = arr;
    printf("c. Adding integer\n");
    ptr += 1; 
    printf("After adding 1: %d\n\n", *ptr);
    ptr = arr;
    printf("d. Subtracting integer:\n");
    ptr += 3; 
    printf("Move to 4th %d\n", *ptr);
    ptr -= 2; 
    printf("After subtracting 2: %d\n\n", *ptr);
    ptr = arr;
    int *ptr2 = arr + 3; 
    printf("e. Subtract two pointers of the same type:\n");
    printf("Pointer 1 value: %d\n", *ptr);
    printf("Pointer 2 value: %d\n", *ptr2);
    printf("Difference between pointers: %ld elements\n", ptr2 - ptr);
    return 0;
}