#include <stdio.h>
int isComplement(int num1, int num2) {
    int result = num1 ^ num2; 
    if (result == -1) {
        return 1;
    } else {
        return 0; 
    }
}
int main() {
    int num1, num2;
    printf("Enter the first number: ");
    scanf("%d", &num1);
    printf("Enter the second number: ");
    scanf("%d", &num2);
    if (isComplement(num1, num2)) {
        printf("The numbers %d and %d are complements of each other.\n", num1, num2);
    } else {
        printf("The numbers %d and %d are not complements of each other.\n", num1, num2);
    }
    return 0;
}
