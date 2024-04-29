#include <stdio.h>
#include <windows.h>

int main(void) {
	int size;
	char menu;

	while (1) {
		printf("-------------------------------------------------------------\n");
		printf("1. 왼쪽 직각 삼각형 그리기\n");
		printf("2. 오른쪽 직각 삼각형 그리기\n");
		printf("3. 왼쪽 직각 역삼각형 그리기\n");
		printf("4. 오른쪽 직각 역삼각형 그리기\n");
		printf("5. 종료\n");
		printf("-------------------------------------------------------------\n");
		do {
			printf("==> 메뉴 선택: ");
			scanf(" %c", &menu);
			if (menu >= '1' && menu <= '5')
				break;
			else {
				printf("입력 오류입니다.\n");
				printf("맞는 번호의 메뉴를 선택해 주세요.\n");
			}
		} while (1);

		if (menu == '5') {
			printf("프로그램을 종료합니다.\n");
			break;
		}

		printf("==> 삼각형 크기(line 수) 입력: ");
		scanf(" %d", &size);

		printf("\n");
		switch (menu) {
		case '1':
			for (int i = 0; i < size; i++) {
				for (int j = 0; j < i + 1; j++)
					printf("*");
				printf("\n");
			}
			break;
		case '2':
			for (int i = 0; i < size; i++) {
				for (int j = size; j > i + 1; j--)
					printf(" ");
				for (int j = 0; j < i + 1; j++)
					printf("*");
				printf("\n");
			}
			break;
		case '3':
			for (int i = 0; i < size; i++) {
				for (int j = size; j > i; j--)
					printf("*");
				for (int j = 0; j < i; j++)
					printf(" ");
				printf("\n");
			}
			break;
		case '4':
			for (int i = 0; i < size; i++) {
				for (int j = 0; j < i; j++)
					printf(" ");
				for (int j = size; j > i; j--)
					printf("*");
				printf("\n");
			}
			break;
		}
		printf("\n");

		system("pause");
		system("cls");
	}

	return 0;
}