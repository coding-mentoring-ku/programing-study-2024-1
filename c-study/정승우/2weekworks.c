#include <stdio.h>
#define day 24
#define hour 60

int main(void)
{
	float t, m;
	int d, h;
	printf("총 소요시간을 입력하시오. ");
	scanf_s("%f", &t);
	d = int(t) / day;
	h = int(t - d * day);
	m = (t - d * day - h) * hour;
	printf("%d일 %d시간 %.0f분", d, h, m);





	return 0;
}