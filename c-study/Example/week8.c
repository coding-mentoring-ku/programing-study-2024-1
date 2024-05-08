#include <stdio.h>

int main() {
	int array[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	int n, m;
	int *ptr = &n;

	printf("%x %x %x %x\n", array, ptr, &n, &m);

	printf("test1: ");
	for (int i = 0; i < 10; i++) {
		printf("%d ", array[i]);
	}

	printf("\ntest2: ");
	for (int i = 0; i < 10; i++) {
		printf("%d ", *(array+i));
	}

	printf("\ntest3: ");
	for (int i = 0; i < 10; i++) {
		printf("%d ", *(ptr++));
	}


	return 0;
}