#include <stdio.h>
#define HOUR_PER_DAY 24
#define MIN_PER_HOUR 60

int main() {
	double time, m;
	int d, h;

	printf("여정 시간을 입력하세요(예: 28.2):"); // 28.2시간
	scanf("%lf", &time);

	d = (int)time / HOUR_PER_DAY; // 1
	h = (int)time % HOUR_PER_DAY; // 28 % 24 = 4 
	// time - (int) time 
	m = (time - d * HOUR_PER_DAY - h) * MIN_PER_HOUR;

	printf("총 %2d일 %2d시간 %0.2lf분이 걸립니다.\n", d, h, m);

	return 0;
}