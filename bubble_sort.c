#include <stdio.h>
#include<math.h>
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}
void bubbleSort(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(&arr[j], &arr[j + 1]);
            }
        }
    }
}
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++){
        printf("%d ", arr[i]);
    }printf("\n");
}
int main() {
    int arr[] = {5,56,5,75,48,46,11,1,35};
    int size = sizeof(arr) / sizeof(arr[0]);
    printf("Original array: ");
    printArray(arr, size);
    bubbleSort(arr, size);
    printf("Sorted array: ");
    printArray(arr, size);
    int a=pow(2,3);
    printf("%d",a);
    return 0;
}