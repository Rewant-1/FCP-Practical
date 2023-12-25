#include <stdio.h>

int main() {
    char string[100]; 
    printf("Enter a string:\n");
    scanf("%s", string);
    int length = 0;
    while (string[length] != '\0') {
        length++;
    }
    int start = 0;
    int end = length - 1;
    while (start < end) {
        char a = string[start];
        string[start] = string[end];
        string[end] =a ;
        start++;
        end--;
    }
    printf("Reversed string: %s\n", string);
    return 0;
}

