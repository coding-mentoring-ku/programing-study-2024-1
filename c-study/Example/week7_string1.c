#include <stdio.h>
#define MAX_SIZE 1001

/*
�Է�: ���ڿ� s, ���� i
���: s�� i��° ����
*/
int main() {
	int i;
	char array[MAX_SIZE];

	scanf("%s", array);
	scanf("%d", &i);

	printf("%c", array[i - 1]);

	return 0;
}