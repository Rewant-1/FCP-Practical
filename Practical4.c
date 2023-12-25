#include <stdio.h>
int main(){
    int a;
    printf("Enter a number to check:\n");
    scanf("%d",&a);
    if(a%2==0){
        printf("No. is even");
    }
    else
    printf("No. is odd");
    return 0;
}