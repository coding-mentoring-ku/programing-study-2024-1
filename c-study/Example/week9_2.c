#include <stdio.h>

// int* arr
int* find_max(int arr[], int size) {
    if (size <= 0) return NULL;

    int* max_ptr = &arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] > *max_ptr) {
            max_ptr = &arr[i];
        }
    }
    return max_ptr;
}

int main() {
    int arr[] = { 5, 2, 8, 10, 3 };
    int size = sizeof(arr) / sizeof(arr[0]);

    printf("배열의 최대값: %d\n", *find_max(arr, size));

    return 0;
}
