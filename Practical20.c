#include <stdio.h>
int main() {
    int a,b,c;
    char operation;
    printf("Values of a,b,c are\n ");
    scanf("%d %d %d",&a,&b,&c);
    printf("Enter operation");
    scanf(" %c", &operation);
    switch(operation)
    {
    case '+':
    printf("Sum is %d", a+b+c);
    break;
    case '-':
    printf("Difference is %d", a-b-c);
    break;
    case '*':
    printf("Multiplication is %d",a*b*c);
    case'/':
    printf("Division of b and c by a is %d\n %d",a/b,a/c);
    }
    return 0;
}