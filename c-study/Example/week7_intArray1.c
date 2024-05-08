#include <stdio.h>
#define MAX_SIZE 10000

/*
입력: N, X, N 크기의 배열
출력: 배열의 원소 중 X보다 작은 값 모두 출력
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