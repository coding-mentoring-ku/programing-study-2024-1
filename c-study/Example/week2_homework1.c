#include <stdio.h>
#define HOUR_PER_DAY 24
#define MIN_PER_HOUR 60

int main() {
	double time, m;
	int d, h;

	printf("���� �ð��� �Է��ϼ���(��: 28.2):"); // 28.2�ð�
	scanf("%lf", &time);

	d = (int)time / HOUR_PER_DAY; // 1
	h = (int)time % HOUR_PER_DAY; // 28 % 24 = 4 
	// time - (int) time 
	m = (time - d * HOUR_PER_DAY - h) * MIN_PER_HOUR;

	printf("�� %2d�� %2d�ð� %0.2lf���� �ɸ��ϴ�.\n", d, h, m);

	return 0;
}