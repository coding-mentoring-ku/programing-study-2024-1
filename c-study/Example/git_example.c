#include <stdio.h>

int main() {
	int result;
	int r, g, b;

	printf("R: ");
	scanf("%d", &r);
	printf("G: ");
	scanf("%d", &g);
	printf("B: ");
	scanf("%d", &b);
	result = (r | (g << 8)) | (b << 16);
	printf("0x%06x", result);
}