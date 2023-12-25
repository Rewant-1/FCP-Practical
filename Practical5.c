#include <stdio.h>
int main(){
    int c,fact=1,i;
    printf("Enter a number\n");
    scanf("%d", &c);
    for(i=1;i<=c;i++){
        fact*=i;}
    printf("Factorial is %d",fact);
    return 0;
}