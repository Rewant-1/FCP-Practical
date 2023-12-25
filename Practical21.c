#include <stdio.h>
#include <string.h>
int main() {
    char Number[]="23,34,45,65,32";
    int wantedelement;

    printf("Enter the element to search: ");
    scanf("%d", &wantedelement);
    int found = 0;
    for (int i = 0; i < 5; i++) {
        if (Number[i] == wantedelement) {
            found = 1;
            printf("Element %d found at index %d.\n", wantedelement, i);
            break; 
        }
    }
    if (!found) {
        printf("Element %d not found in the array.\n", wantedelement);
    }
    return 0;
}
