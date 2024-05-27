#include <stdio.h>

/*
* 2주차 C
* 파일명 : 240528_Week2_C_Dongkyu_2.c
* 수행일 : 2024-05-28
* 수행자 : 김동규 (Lil P)
*/

/*헬멧의 체적과 표면적을 구하는 프로그램을 작성하시오. 
* 헬멧의 표면적과 체적은 헬멧의 높이(h)와 base 반지름(a)을 
* 입력으로 받아 다음의 공식에 의해 계산된다. 
* (π는 3.14159265를 사용해 기호상수로 정의한다.)
* - 입력: 헬멧의 높이와 base 반지름
* - 출력: 헬멧의 표면적고 체적
*/

#define PI	3.141592

int main()
{
	int h, a; // 입력: 헬멧의 높이와 base 반지름
	float volume, area; // 출력: 헬멧의 표면적고 체적
	
	printf("높이(h)를 입력하시오:\n");
	scanf_s("%d", &h);
	printf("반지름(a)을 입력하시오:\n");
	scanf_s("%d", &a);

	volume = 0;
	volume = PI * h * (3 * a * a + h * h) / 6;
	area = 2 * PI * h * (h / 3 + volume / PI * h * h);

	printf("V = %f, 표면적 = %f", volume, area);

	return 0;
}