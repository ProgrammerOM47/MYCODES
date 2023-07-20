#include <stdio.h>
#include <string.h>
void convertToLowercase(char *str) {
    for (int i = 0; i < strlen(str); i++) {
        if (str[i] >= 'A' && str[i] <= 'Z') {
            str[i] = str[i] + 32;
        }
    }
}
void convertToUppercase(char *str) {
    for (int i = 0; i < strlen(str); i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - 32;
        }
    }
}
int main() {
    char str[100];

    printf("Enter a string: ");
    gets(str);
    convertToUppercase(str);
    printf("Uppercase string: %s\n", str);
    convertToLowercase(str);
    printf("Lowercase string: %s\n", str);
    return 0;
}