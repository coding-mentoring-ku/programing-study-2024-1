#include <stdio.h>

int main() {
    int a = 5, b = 10;
    int* temp;

    printf("��ȯ ��: a = %d, b = %d\n", a, b);
    temp = &a;
    a = b;
    b = *temp;

    printf("��ȯ ��: a = %d, b = %d\n", a, b);

    return 0;
}