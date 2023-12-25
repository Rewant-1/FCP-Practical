#include <stdio.h>
int factorial(int number) {
    if (number == 0 || number == 1) {
        return 1;
    } else {
        return number * factorial(number - 1);
    }
}
int nCr(int n, int r) {
    if (r < 0 || r > n) {
        return 0;
    }
    return factorial(n) / (factorial(r) * factorial(n - r));
}

int main() {
    int n, r;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    printf("Enter the value of r: ");
    scanf("%d", &r);
    printf("%dC%d is: %d\n", n, r, nCr(n, r));
    return 0;
}
