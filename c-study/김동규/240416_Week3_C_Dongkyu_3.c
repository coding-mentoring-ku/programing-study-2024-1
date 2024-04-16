#include <stdio.h>

/*
* 3주차 C
* 파일명 : 24240416_Week3_C_Dongkyu_3.c
* 수행일 : 2024-04-16
* 수행자 : 김동규 (Lil P)
*/

/*중첩 for문과 조건문을 활용해 문제를 푸시오.
*
? system 명령어를 사용하기 위해 <windows.h> 헤더를 추가해 문제를
풉니다. (cmd 화면 대기: system(“pause”); cmd 화면 지우기: system(“cls”);)
? 아래와 같은 화면이 출력되도록 하고, (1, 2, 3, 4, 5)가 입력되는 것에 따라
별을 찍도록 구성하세요.
*/

int main()
{
	int inputNum;

	printf("-----------------------------------------------------------------\n");
	printf("1. 왼쪽 직각 삼각형 그리기\n");
	printf("2. 오른쪽 직각 삼각형 그리기\n");
	printf("3. 왼쪽 직각 역삼각형 그리기\n");
	printf("4. 오른쪽 직각 역삼각형 그리기\n");
	printf("5. 종료\n");
	printf("-----------------------------------------------------------------\n");

	while (1)
	{
		printf("==> 메뉴선택: ");
		scanf_s("%d", &inputNum);

		if (inputNum <= 0 || 6 <= inputNum)
		{
			printf("입력 오류입니다.\n");
			printf("맞는 번호와 메뉴를 선택해주세요.\n");
		}
		else
		{
			break;
		}
	}

	int line;

	printf("==> 삼각형 크기(line 수) 입력: ");
	scanf_s("%d", &line);
	printf("\n");

	switch (inputNum)
	{
	case 1:
		for (int i = 1; i <= line; i++)
		{
			for (int j = 1; j <= i; j++)
			{
				printf("*");
			}
			printf("\n");
		}
		break;

	case 2:
		for (int i = 1; i <= line; i++)
		{
			for (int k = 1; k <= line - i; k++)
			{
				printf(" ");
			}
			for (int j = 1; j <= i; j++)
			{
				printf("*");
			}
			printf("\n");
		}
		break;

	case 3:
		for (int i = 1; i <= line; i++)
		{
			for (int j = 1; j <= line - i + 1; j++)
			{
				printf("*");
			}
			printf("\n");
		}
		break;

	case 4:
		for (int i = 1; i <= line; i++)
		{
			for (int k = 1; k <= i - 1; k++)
			{
				printf(" ");
			}
			for (int j = 1; j <= line - i + 1; j++)
			{
				printf("*");
			}
			printf("\n");
		}
		break;
	}

	return 0;
}