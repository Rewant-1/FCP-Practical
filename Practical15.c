#include <stdio.h>
#include <string.h>
int main() {
    char string[100];
    int length; 
    printf("Enter a string:\n");
    scanf("%s", string);
    length = strlen(string);
    printf("The length of the entered string is: %d\n", length);
    return 0;
}
