#define _CRT_SECURE_NO_WARNINGS
#define MIN_PER_HOUR 60
#define HOUR_PER_DAY 24
#include <stdio.h>

int main(void) {
	//�Է�: �� �ҿ�ð�(�Ǽ�), ���: �� �ҿ�ð�(��, ��, ��) *��ȣ��� or ��ũ�λ�� ����
	double time, minute;
	int day, hour;

	printf("������ �� �ҿ�ð�: ");
	scanf("%lf", &time);

	day = (int)time / HOUR_PER_DAY;
	hour = (int)time % HOUR_PER_DAY;
	minute = (time - (int)time) * MIN_PER_HOUR;

	printf("�� �ҿ�ð��� %d�� %d�ð� %.1lf�� �Դϴ�.", day, hour, minute);

	return 0;
}