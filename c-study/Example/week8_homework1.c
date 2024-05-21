#include <stdio.h>

int main() {
    int a = 5, b = 10;
    int* temp;

    printf("교환 전: a = %d, b = %d\n", a, b);
    temp = &a;
    a = b;
    b = *temp;

    printf("교환 후: a = %d, b = %d\n", a, b);

    return 0;
}