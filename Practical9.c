#include <stdio.h>

int main() {
    int size;
    printf("Enter the size of the array:\n ");
    scanf("%d", &size);
    int Array[size];
    printf("Enter %d elements:\n", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &Array[i]);
    }
    int average,sum=0;;
    for(int i=0;i<size;i++){
        sum+=Array[i];
        average=sum/size;
        }
int largest=Array[0];
for(int i=0;i<size;i++){
    if (Array[i]>largest){
        largest=Array[i];
    }
}
int smallest=Array[0];
for(int i=0;i<size;i++){
    if (Array[i]<smallest){
        smallest=Array[i];
    }
}
    printf("The average is %d\n",average);
    printf("The max value is %d\n",largest);
    printf("The min value is %d",smallest);
    return 0;
}
