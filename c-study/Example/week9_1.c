#include <stdio.h>

void swap(int *x, int *y) {
    printf("교환 전: x = %d, y = %d\n", *x, *y);
    int temp = *x;
    *x = *y;
    *y = temp;
    printf("교환 후: x = %d, y = %d\n", *x, *y);
}

int main() {
    int a = 5, b = 10;

    printf("교환 전: a = %d, b = %d\n", a, b);
    swap(&a, &b);
    printf("교환 후: a = %d, b = %d\n", a, b);

    return 0;
}
