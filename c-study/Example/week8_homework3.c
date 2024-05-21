#include <stdio.h>
#include <string.h>
#define MAX_LENGTH 1001

int main() {
    char str[MAX_LENGTH] = "";
    printf("문자열 입력: ");
    // scanf("%s", str); // white space '\n', '\t', ' '
    fgets(str, sizeof(str), stdin); // '\n'
    *strchr(str, '\n') = '\0';
    
    char* start = str;
    char* end = str + strlen(str) - 1;

    while (start < end) {
        char temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }

    printf("뒤집힌 문자열: %s\n", str);

    return 0;
}
