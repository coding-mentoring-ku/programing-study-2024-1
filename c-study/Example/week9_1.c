#include <stdio.h>

void swap(int *x, int *y) {
    printf("��ȯ ��: x = %d, y = %d\n", *x, *y);
    int temp = *x;
    *x = *y;
    *y = temp;
    printf("��ȯ ��: x = %d, y = %d\n", *x, *y);
}

int main() {
    int a = 5, b = 10;

    printf("��ȯ ��: a = %d, b = %d\n", a, b);
    swap(&a, &b);
    printf("��ȯ ��: a = %d, b = %d\n", a, b);

    return 0;
}
