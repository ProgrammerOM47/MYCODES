#include <stdio.h>
#include<string.h>
int countVowels(char *str) {
    int count = 0;
    char c;
    while (*str) {
        c = *str;
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
            c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U') {
            count++;
        }
        str++;
    }
    return count;
}
int main() {
    char str[100];
    printf("Enter a string: ");
    scanf("%s",&str);
    printf("%s\n",str);
    int vowels = countVowels(str);
    printf("Number of vowels in the string: %d\n", vowels);
    return 0;
}
