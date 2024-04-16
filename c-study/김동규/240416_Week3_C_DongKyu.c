#include <stdio.h>

/*
* 3���� C
* ���ϸ� : 24240416_Week3_C_Dongkyu.c
* ������ : 2024-04-16
* ������ : �赿�� (Lil P)
*/

/* ���� : ���챸�̰� ������ �ð��� �� ������ �ڵ� ���
* ���۽ð��� �ʿ��� �ð��� �� ������ �־������� ������ �ð��� ���
* �Է� : ù° �� ����ð�, 0 <= �ð� <= 23, 0 <= �� <= 59, ������, ��ĭ ����
*		�ι�° �� �丮�ϴµ� 0<= �ʿ��� �ð� <= 1000
* ���: ���� �ð��� �� �� �� ��ĭ �ΰ� 2359���� 0000���� �Ѿ
*/

#define TIME 60

int main()
{
	int hour, min, reqMin;

	scanf_s("%d %d", &hour, &min);
	scanf_s("%d", &reqMin);

	int converseHour, converseMin;

	converseHour = reqMin / TIME;
	converseMin = reqMin % TIME;

	int outputHour, outputMin;

	outputHour = hour + converseHour;
	outputMin = min + converseMin;

	if (outputMin >= 60)
	{
		outputMin -= 60;
		outputHour += 1;
	}
	if (outputHour >= 24)
	{
		outputHour -= 24;
	}

	printf("%d %d", outputHour, outputMin);

	return 0;
}