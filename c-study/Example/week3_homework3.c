#include <stdio.h>
#include <windows.h>

int main(void) {
	int size;
	char menu;

	while (1) {
		printf("-------------------------------------------------------------\n");
		printf("1. ���� ���� �ﰢ�� �׸���\n");
		printf("2. ������ ���� �ﰢ�� �׸���\n");
		printf("3. ���� ���� ���ﰢ�� �׸���\n");
		printf("4. ������ ���� ���ﰢ�� �׸���\n");
		printf("5. ����\n");
		printf("-------------------------------------------------------------\n");
		do {
			printf("==> �޴� ����: ");
			scanf(" %c", &menu);
			if (menu >= '1' && menu <= '5')
				break;
			else {
				printf("�Է� �����Դϴ�.\n");
				printf("�´� ��ȣ�� �޴��� ������ �ּ���.\n");
			}
		} while (1);

		if (menu == '5') {
			printf("���α׷��� �����մϴ�.\n");
			break;
		}

		printf("==> �ﰢ�� ũ��(line ��) �Է�: ");
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