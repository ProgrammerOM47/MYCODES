#include<stdio.h>
#include<string.h>  
int is_pallindrome(char *str) {
    int length = strlen(str);
    for (int i = 0, j = length - 1; i < j; i++, j--) {
        if (str[i] !=str[j]){
            return 0;
        }
    }

    return 1;
}

int main(){
    char str[100];
    scanf("%s",str);
    if(is_pallindrome(str)){
        printf("string is pallindrome");
    }else{
        printf("string is not pallindrome");
    }
    return 0;

}