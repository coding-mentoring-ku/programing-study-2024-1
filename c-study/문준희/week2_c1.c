#define _CRT_SECURE_NO_WARNINGS
#define MIN_PER_HOUR 60
#define HOUR_PER_DAY 24
#include <stdio.h>

int main(void) {
	//입력: 총 소요시간(실수), 출력: 총 소요시간(일, 시, 분) *기호상수 or 매크로상수 정의
	double time, minute;
	int day, hour;

	printf("비행의 총 소요시간: ");
	scanf("%lf", &time);

	day = (int)time / HOUR_PER_DAY;
	hour = (int)time % HOUR_PER_DAY;
	minute = (time - (int)time) * MIN_PER_HOUR;

	printf("총 소요시간은 %d일 %d시간 %.1lf분 입니다.", day, hour, minute);

	return 0;
}