#include <stdio.h>

/*
* 2���� C
* ���ϸ� : 24240404_Week2_C_Dongkyu.c
* ������ : 2024-04-04
* ������ : �赿�� (Lil P)
*/

// �װ��� ���� �� ������ �� �ҿ�ð�(ex 28.2 �ð�)�� �ð� ������ �Է¹޾�,
// ��ĥ, ��ð�, ������� ����ϴ� ���α׷��� �ۼ��Ͻÿ�. 
// (��ȣ��� Ȥ�� ��ũ�� ����� ������ ����� ��) 
// - �Է�: �� �ҿ�ð�(�Ǽ�) 
// - ��� : ��, �ð�, ��

#define DAY 24
#define MINUTE 60

int main()
{
	float travelhour;

	float day = 0;
	float hour = 0;
	int minute = 0;

	printf("�װ��� ���� �� ������ �� �ҿ�ð�(ex 28.2 �ð�)�� �Է��ϼ���: ");
	scanf_s("%f", &travelhour);

	day = travelhour / DAY;
	hour = travelhour;
	minute = (int) (travelhour * MINUTE);

	printf("������ �� �ҿ�ð��� %f\n", travelhour);
	printf("%f��, %f�ð�, %d��", day, hour, minute);

	return 0;
}