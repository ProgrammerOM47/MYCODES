#include <stdio.h>
int binarySearch(int arr[], int left, int right, int key) {
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (arr[mid] == key) {
            return mid; // Return the index where the key is found
        }
        if (arr[mid] < key) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    return -1; // Return -1 if the key is not found
}
int main() {
    int arr[] = {2, 5, 7, 12, 15, 18, 20};
    int size = sizeof(arr) / sizeof(arr[0]);
    int key;
    printf("Enter the number to search: ");
    scanf("%d", &key);
    int index = binarySearch(arr, 0, size - 1, key);
    if (index != -1) {
        printf("Number found at index %d\n", index);
    } else {
        printf("Number not found in the array\n");
    }
    return 0;
}