#include<stdio.h>
int binaryToDecimal(int n){
    int num = n;
    int dec_value = 0;
    int base=1;
    int temp = num;
    while (temp) {
        int last_digit = temp % 10;
        temp = temp / 10;
        dec_value += last_digit * base;
        base = base * 2;
    }
    return dec_value;
}
int DecimalToBinary(long long decimal){
    long long tempDecimal, binary;
    int rem, place = 1;
    binary = 0;
    tempDecimal = decimal;
    while(tempDecimal > 0){
        rem = tempDecimal % 2;
        binary = (rem * place) + binary;
        tempDecimal /= 2;
        place *= 10;
    }
    return binary;
}
int main(){
    long long num;
    int base;
    scanf("%lld",&num);
    scanf("%d",&base);
    if(base==10){
        printf("%d",DecimalToBinary(num));
    }
    if(base==2){
        printf("%d", binaryToDecimal(num));
    }
    return 0;
}