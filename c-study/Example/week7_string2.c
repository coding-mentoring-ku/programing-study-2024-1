#include <stdio.h>
#include <string.h>
#define MAX_SIZE 101

/*
입력: 문자열 s
출력: 각 알파벳이 s에 처음 등장한 위치
*/
// baekjoon
// 1 0 -1 ....
int main() {
	int mask[26];
	char array[MAX_SIZE]; // '\0'

	scanf("%s", array);

	memset(mask, -1, sizeof(mask)); // memory set
	for (char i = 'a'; i <= 'z'; i++) {
		for (int j = 0; j < strlen(array); j++) {
			if (i == array[j]) {
				mask[i - 'a'] = j;
				break;
			}
		}
	}

	for (int i = 0; i < 26; i++) {
		printf("%d ", mask[i]);
	}

	return 0;
}