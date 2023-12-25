#include <stdio.h>
int main(){
    int a,i,sum;
    sum=0;
    i=0;

    printf("Enter a\n");
    scanf("%d",&a);
    // for(i=0;i<=a;i++){
    //     sum=sum+i;
        
    // }
    // printf("Sum of a natural no. is %d",sum);
    while(i<=a){
        sum=sum+i;
        i++;
    }
    printf("The Sum of %d natural no. is %d", a,sum);

    return 0;
}