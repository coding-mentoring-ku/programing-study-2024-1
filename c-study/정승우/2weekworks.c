#include <stdio.h>
#define day 24
#define hour 60

int main(void)
{
	float t, m;
	int d, h;
	printf("�� �ҿ�ð��� �Է��Ͻÿ�. ");
	scanf_s("%f", &t);
	d = int(t) / day;
	h = int(t - d * day);
	m = (t - d * day - h) * hour;
	printf("%d�� %d�ð� %.0f��", d, h, m);





	return 0;
}