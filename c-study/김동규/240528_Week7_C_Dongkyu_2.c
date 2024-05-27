#include <stdio.h>

/*
* 7주차 C
* 파일명 : 240528_Week7_C_Dongkyu_2.c
* 수행일 : 2024-05-28
* 수행자 : 김동규 (Lil P)
*/

int main_7_2()
{
	int N, M; // N : 바구니 갯수, M : 교환 횟수
	int i, j, temp;

	scanf_s("%d %d", &N, &M);

	int a[100];

	for (int k = 1; k <= N; k++)
		a[k] = k;


	for (int l = 1; l <= M; l++)
	{
		scanf_s("%d %d", &i, &j);

		temp = a[i];
		a[i] = a[j];
		a[j] = temp;
	}

	for (int k = 1; k <= N; k++)
		printf("%d ", a[k]);

	return 0;
}