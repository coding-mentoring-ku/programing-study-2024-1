#include <stdio.h>
#define MAX_SIZE 1001

/*
입력: 문자열 s, 정수 i
출력: s의 i번째 원소
*/
int main() {
	int i;
	char array[MAX_SIZE];

	scanf("%s", array);
	scanf("%d", &i);

	printf("%c", array[i - 1]);

	return 0;
}