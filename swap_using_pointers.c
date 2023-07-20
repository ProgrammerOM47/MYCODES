#include<stdio.h>
void swap(int *a,int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
}
int main(){
    int a,b;
    printf("Enter two numbers to swap\n");
    scanf("%d%d",&a,&b);
    printf("value of a:%d\nvalue of b is:%d\n",a,b);
    swap(&a,&b);
    printf("value of a after swapping:%d\nvalue of b after swapping is :%d",a,b);
    return 0;
}