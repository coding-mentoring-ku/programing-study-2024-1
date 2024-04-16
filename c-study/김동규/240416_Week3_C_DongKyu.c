#include <stdio.h>

/*
* 3주차 C
* 파일명 : 24240416_Week3_C_Dongkyu.c
* 수행일 : 2024-04-16
* 수행자 : 김동규 (Lil P)
*/

/* 문제 : 오븐구이가 끝나는 시간을 분 단위로 자동 계산
* 시작시각과 필요한 시간이 분 단위로 주어졌을때 끝나는 시간을 계산
* 입력 : 첫째 줄 현재시간, 0 <= 시간 <= 23, 0 <= 분 <= 59, 정수로, 빈칸 사이
*		두번째 줄 요리하는데 0<= 필요한 시간 <= 1000
* 출력: 종료 시간의 시 와 분 빈칸 두고 2359에서 0000으로 넘어감
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