#include <stdio.h>
#include <string.h>
#define MAX_LENGTH 1001

void swap(char *x, char *y) {
    char temp = *x;
    *x = *y;
    *y = temp;
}

void reverse_string(char* str) {
    int length = strlen(str);
    char* start = str;
    char* end = str + length - 1; 

    while (start < end) {
        swap(start, end);
        start++;
        end--;
    }
}


int main() {
    char str[MAX_LENGTH] = "";
    printf("문자열 입력: ");
    fgets(str, sizeof(str), stdin);
    *strchr(str, '\n') = '\0';

    reverse_string(str);

    printf("뒤집힌 문자열: %s\n", str);

    return 0;
}
