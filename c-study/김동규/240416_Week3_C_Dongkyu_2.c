#include <stdio.h>

/*
* 3주차 C
* 파일명 : 240416_Week3_C_Dongkyu_2.c
* 수행일 : 2024-04-16
* 수행자 : 김동규 (Lil P)
*/

/* 두 정수 A, B 입력, A+B 출력
* 입력은 여러 개의 테스트 케이스
* 각 테스트 케이스는 한 줄로 이루어져있다
* 0 < A, 0 < B
* 입력의 마지막에는 0 두 개가 들어온다
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