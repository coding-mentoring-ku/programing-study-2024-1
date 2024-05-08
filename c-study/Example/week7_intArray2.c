#include <stdio.h>
#define MAX_SIZE 100

/*
�Է�: N, M, M���� ��ȯ���
���: N ũ���� �迭���� M�� ��ȯ�� ���
*/
int main() {
	int n, m, x, y, temp;
	int array[MAX_SIZE];

	scanf("%d %d", &n, &m);
	for (int i=0; i < n; i++) {
		array[i] = i + 1; // n = 5, array = {1, 2, 3, 4, 5}
	}
	
	// 1 2 \ 3 4 \ 2 4
	for (int i=0; i < m; i++) {
		scanf("%d %d", &x, &y);
		temp = array[x - 1];
		array[x - 1] = array[y - 1];
		array[y - 1] = temp;
	}

	for (int i = 0; i < n; i++) {
		printf("%d ", array[i]);
	}

	return 0;
}