#include <stdio.h>

/*
* 3���� C
* ���ϸ� : 24240416_Week3_C_Dongkyu_3.c
* ������ : 2024-04-16
* ������ : �赿�� (Lil P)
*/

/*��ø for���� ���ǹ��� Ȱ���� ������ Ǫ�ÿ�.
*
? system ��ɾ ����ϱ� ���� <windows.h> ����� �߰��� ������
Ǳ�ϴ�. (cmd ȭ�� ���: system(��pause��); cmd ȭ�� �����: system(��cls��);)
? �Ʒ��� ���� ȭ���� ��µǵ��� �ϰ�, (1, 2, 3, 4, 5)�� �ԷµǴ� �Ϳ� ����
���� �ﵵ�� �����ϼ���.
*/

int main()
{
	int inputNum;

	printf("-----------------------------------------------------------------\n");
	printf("1. ���� ���� �ﰢ�� �׸���\n");
	printf("2. ������ ���� �ﰢ�� �׸���\n");
	printf("3. ���� ���� ���ﰢ�� �׸���\n");
	printf("4. ������ ���� ���ﰢ�� �׸���\n");
	printf("5. ����\n");
	printf("-----------------------------------------------------------------\n");

	while (1)
	{
		printf("==> �޴�����: ");
		scanf_s("%d", &inputNum);

		if (inputNum <= 0 || 6 <= inputNum)
		{
			printf("�Է� �����Դϴ�.\n");
			printf("�´� ��ȣ�� �޴��� �������ּ���.\n");
		}
		else
		{
			break;
		}
	}

	int line;

	printf("==> �ﰢ�� ũ��(line ��) �Է�: ");
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