#include <stdio.h>

/*
* 7���� C
* ���ϸ� : 240528_Week7_C_Dongkyu_2.c
* ������ : 2024-05-28
* ������ : �赿�� (Lil P)
*/

int main_7_2()
{
	int N, M; // N : �ٱ��� ����, M : ��ȯ Ƚ��
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