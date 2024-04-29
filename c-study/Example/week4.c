#pragma warning (disable:4996)
#include <stdio.h>
#include <process.h>
#include <string.h>


void prn();
int input();
int menu1(int);
int menu2(int);
int menu3(int);

int main() {
	int n;

	while (1) {
		prn();
		n = input();

		if (n == 1) {
			printf("팩토리얼(반복문 사용) 실행합니다.\n");

			// 팩토리얼 구할 정수를 1개 입력받아
			// 입력받은 정수를 menu1() 함수 인자로 보내고
			// menu1() 함수의 반환타입을 팩토리얼 결과로 출력
			// >> 결과화면 <<
			// 5!=120
			int str, result;
			str = input();
			result = menu1(str);
			printf("팩토리얼(반복문 사용)을 실행한 결과를 출력합니다.\n");
			printf("%d!=%d\n\n", str, result);
		}
		else if (n == 2) {
			printf("팩토리얼(재귀함수 사용) 실행합니다.\n");
			int str, result;
			str = input();
			result = menu2(str);

			printf("팩토리얼(재귀함수 사용)을 실행한 결과를 출력합니다.\n");
			printf("%d!=%d\n\n", str, result);
		}
		else if (n == 3) {
			printf("피보나치수열(재귀함수 사용) 실행합니다.\n");
			int str = input();
			printf("피보나치 수열의 %d번째항까지 출력합니다.\n", str);
			for (int i = 1; i <= str; i++) {
				printf("%d ", menu3(i));
			}
			printf("\n\n");
		}
		else if (n == 4) {
			printf("종료합니다.\n");
			exit(0);
		}
		else {
			printf("1~3사이 숫자만 입력 가능합니다.\n\n");
			continue;
		}
	}

	return 0;
}

void prn() {
	printf("===========메뉴==========\n");
	printf("1.팩토리얼(반복문 사용)\n");
	printf("2.팩토리얼(재귀함수 사용)\n");
	printf("3.피보나치수열(재귀함수 사용)\n");
	printf("4.종료\n");
	printf("=========================\n");
}

int input() {
	int n;
	printf("정수 입력: ");
	scanf("%d", &n);
	return n;
}

int menu1(int a) {
	int max = 1;
	int i = 0;
	for (; i >= 1;) {
		max *= i;
	}

	while (i >= 1) {
		max *= i;
	}

	return max;
}

int menu2(int a) { // 3 * 2 // 2 * 1 // 1
	if (a <= 1) {
		return 1;
	}
	else {
		return a * menu2(a - 1);
	}
}

// 6! = 6 x 5! = 6 x 5 x 4! =
/*
(1) 메인함수에서 menu2(3);
(2) menu2(3)에서 a == 3이기 때문에 return 3 * menu2(2); -> menu2(3)에서 menu2(2) 호출
(3) menu2(2)에서 a == 2이기 때문에 return 2 * menu2(1); -> menu2(2)에서 menu2(1) 호출
(4) menu2(1)에서 a == 1. if (a<=1) 만족해서 return 1;
(5) menu2(2)로 돌아가서 return 2 * 1;
(6) menu2(3)로 돌아가서 return 3 * 2;
(7) 메인함수에서 menu2(3) == 6;
*/


// 피보나치 수열: 0 1 1 2 3 5 8 13 ... a10 = ?
// ai = ai-1 + ai-2 
// a4 = a3 + a2 = (a2 + a1) + (a1 + a0)
int menu3(int n) { // 3
	if (n == 0) {
		return 0;
	}
	else if (n <= 2) {
		return 1;
	}
	else {
		return menu3(n - 1) + menu3(n - 2);
	}
}

