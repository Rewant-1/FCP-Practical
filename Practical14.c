#include <stdio.h>
#include <string.h>

int main() {
    char string[100];
    printf("Enter a string:\n");
    scanf("%s", string);
    int length = strlen(string);
    int Palindrome = 1; 
    for (int i = 0; i < (length / 2); i++) {
        if (string[i] != string[length - i - 1]) {
            Palindrome = 0; 
            break;
        }
    }
    if (Palindrome) {
        printf("The string is a palindrome.\n");
    } else 
        printf("The string is not a palindrome.\n");

    return 0;
}
