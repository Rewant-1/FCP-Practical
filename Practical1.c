#include <stdio.h>
float simpleinterest(int principalamount,int rate,int time) {
float interest = (principalamount * rate * time) / 100;
return interest;
}
int main() {
    int principalamount, rate, time;
    printf("Enter the amount you borrowed\n");
    scanf("%d", &principalamount);
    printf("Enter the rate percent\n");
    scanf("%d", &rate);
    printf("Enter the time period of your loan in years");
    scanf("%d", &time);   
    float interest =simpleinterest(principalamount, rate, time);
    printf("The simple interest on %d is %f\n",principalamount, interest);
    return 0;
}
