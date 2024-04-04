#include <stdio.h>

/*
* 2주차 C
* 파일명 : 24240404_Week2_C_Dongkyu.c
* 수행일 : 2024-04-04
* 수행자 : 김동규 (Lil P)
*/

// 항공권 예약 시 여정의 총 소요시간(ex 28.2 시간)을 시간 단위로 입력받아,
// 며칠, 몇시간, 몇분인지 출력하는 프로그램을 작성하시오. 
// (기호상수 혹은 매크로 상수를 정의해 사용할 것) 
// - 입력: 총 소요시간(실수) 
// - 출력 : 일, 시간, 분

#define DAY 24
#define MINUTE 60

int main()
{
	float travelhour;

	float day = 0;
	float hour = 0;
	int minute = 0;

	printf("항공권 예약 시 여정의 총 소요시간(ex 28.2 시간)을 입력하세요: ");
	scanf_s("%f", &travelhour);

	day = travelhour / DAY;
	hour = travelhour;
	minute = (int) (travelhour * MINUTE);

	printf("여정의 총 소요시간은 %f\n", travelhour);
	printf("%f일, %f시간, %d분", day, hour, minute);

	return 0;
}