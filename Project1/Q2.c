#pragma warning(disable:4996)
#include <stdio.h>
int main(void) {
	char S[1000];
	int i;

	scanf("%s", S);
	scanf("%d", &i);

	printf("%c", S[i-1]);

	return 0;
}