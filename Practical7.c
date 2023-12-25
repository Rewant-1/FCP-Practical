#include <stdio.h>
int main() {
    int Random[8];
    printf("Enter the elements:\n");
    for (int i = 0; i < 8; i++) {
        scanf("%d", &Random[i]);
    } 
    int largest = Random[0];
    for (int i = 0; i < 8; i++) {
        if (Random[i] > largest) {
            largest = Random[i];
        }
    }
    printf("The largest element in the array is: %d\n", largest);
 return 0;
}
