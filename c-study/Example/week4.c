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
			printf("���丮��(�ݺ��� ���) �����մϴ�.\n");

			// ���丮�� ���� ������ 1�� �Է¹޾�
			// �Է¹��� ������ menu1() �Լ� ���ڷ� ������
			// menu1() �Լ��� ��ȯŸ���� ���丮�� ����� ���
			// >> ���ȭ�� <<
			// 5!=120
			int str, result;
			str = input();
			result = menu1(str);
			printf("���丮��(�ݺ��� ���)�� ������ ����� ����մϴ�.\n");
			printf("%d!=%d\n\n", str, result);
		}
		else if (n == 2) {
			printf("���丮��(����Լ� ���) �����մϴ�.\n");
			int str, result;
			str = input();
			result = menu2(str);

			printf("���丮��(����Լ� ���)�� ������ ����� ����մϴ�.\n");
			printf("%d!=%d\n\n", str, result);
		}
		else if (n == 3) {
			printf("�Ǻ���ġ����(����Լ� ���) �����մϴ�.\n");
			int str = input();
			printf("�Ǻ���ġ ������ %d��°�ױ��� ����մϴ�.\n", str);
			for (int i = 1; i <= str; i++) {
				printf("%d ", menu3(i));
			}
			printf("\n\n");
		}
		else if (n == 4) {
			printf("�����մϴ�.\n");
			exit(0);
		}
		else {
			printf("1~3���� ���ڸ� �Է� �����մϴ�.\n\n");
			continue;
		}
	}

	return 0;
}

void prn() {
	printf("===========�޴�==========\n");
	printf("1.���丮��(�ݺ��� ���)\n");
	printf("2.���丮��(����Լ� ���)\n");
	printf("3.�Ǻ���ġ����(����Լ� ���)\n");
	printf("4.����\n");
	printf("=========================\n");
}

int input() {
	int n;
	printf("���� �Է�: ");
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
(1) �����Լ����� menu2(3);
(2) menu2(3)���� a == 3�̱� ������ return 3 * menu2(2); -> menu2(3)���� menu2(2) ȣ��
(3) menu2(2)���� a == 2�̱� ������ return 2 * menu2(1); -> menu2(2)���� menu2(1) ȣ��
(4) menu2(1)���� a == 1. if (a<=1) �����ؼ� return 1;
(5) menu2(2)�� ���ư��� return 2 * 1;
(6) menu2(3)�� ���ư��� return 3 * 2;
(7) �����Լ����� menu2(3) == 6;
*/


// �Ǻ���ġ ����: 0 1 1 2 3 5 8 13 ... a10 = ?
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

