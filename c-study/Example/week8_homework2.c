#include <stdio.h>
#define MAX_SIZE 1000

int main() {
    int arr[MAX_SIZE] = { 0, };
    int size = 0;
    printf("�Է��� �迭�� ũŰ: ");
    scanf("%d", &size);
    printf("�迭 �Է�(e.g. 1 2 3 4 5): ");
    for (int i = 0; i < size; i++) {
        scanf("%d", arr + i);
    }

    int* max_ptr = arr;
    for (int i = 1; i < size; i++) {
        if (*max_ptr < arr[i]) {
            max_ptr = arr + i;
        }
    }
    printf("�迭�� �ִ밪: %d\n", *max_ptr);

    return 0;
}
