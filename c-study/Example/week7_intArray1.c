#include <stdio.h>
#define MAX_SIZE 10000

/*
�Է�: N, X, N ũ���� �迭
���: �迭�� ���� �� X���� ���� �� ��� ���
*/
int main() {
	int n, x;
	int array[MAX_SIZE];

	scanf("%d %d", &n, &x);
	for (int i=0; i < n; i++) {
		scanf("%d", &array[i]);
	}
	
	for (int i = 0; i < n; i++) {
		if (array[i] < x) {
			printf("%d ", array[i]);
		}
	}

	return 0;
}