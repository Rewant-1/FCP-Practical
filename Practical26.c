#include <stdio.h>
#include <stdlib.h>
int main() {
    int *array;
    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    array = (int *)malloc(size * sizeof(int));
    if (array == NULL) {
        printf("Memory allocation failed.\n");
        return 1; 
    }
    printf("Enter elements for the array:\n");
    for (int i = 0; i < size; i++) {
        scanf("%d", &array[i]);
    }
    printf("Elements of the array:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }
    free(array);
    return 0;
}
