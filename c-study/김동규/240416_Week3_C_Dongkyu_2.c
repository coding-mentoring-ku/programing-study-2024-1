#include <stdio.h>

/*
* 3���� C
* ���ϸ� : 240416_Week3_C_Dongkyu_2.c
* ������ : 2024-04-16
* ������ : �赿�� (Lil P)
*/

/* �� ���� A, B �Է�, A+B ���
* �Է��� ���� ���� �׽�Ʈ ���̽�
* �� �׽�Ʈ ���̽��� �� �ٷ� �̷�����ִ�
* 0 < A, 0 < B
* �Է��� ���������� 0 �� ���� ���´�
*/

int main_d()
{
	int num1, num2;

	for (;;)
	{
		scanf_s("%d %d", &num1, &num2);

		if (num1 == 0 && num2 == 0)
		{
			break;
		}

		printf("%d \n", num1 + num2);
	}

	return 0;
}