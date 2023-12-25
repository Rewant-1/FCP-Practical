#include <stdio.h>
int sumofdiagonal(int matrix[3][3]) {
    int sum = 0;
    for (int i = 0; i < 3; i++) {
        sum += matrix[i][i]; 
    }
    return sum;
    }
int main() {
    int matrix[3][3];
    printf("Enter elements of the 3x3 matrix:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    printf("Sum of diagonal elements: %d\n", sumofdiagonal(matrix));
    return 0;
}


