#include <stdio.h>
int main(){
    int i=0;
    int Array[5];
    printf("Enter the elements:\n");
    for(i=0;i<5;i++){
        scanf("%d",&Array[i]);
    }
    int sum=0;
    for(i=0;i<5;i++){
        sum+=Array[i];
    }
    printf("The sum is %d",sum);
    return 0;
}