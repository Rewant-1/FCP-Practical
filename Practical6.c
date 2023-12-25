#include <stdio.h>
int main() {
    int Name[6]; 
    printf("Enter the elements:\n");
    for (int i = 0; i < 6; i++) {
        scanf("%d", &Name[i]);
    }
    printf("Odd-indexed elements:\n");
    for (int i = 0; i < 6; i += 2) {
        printf("%d ", Name[i]);
    }
    return 0;
}


