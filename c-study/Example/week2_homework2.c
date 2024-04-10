#include <stdio.h>
#include <math.h>

int main() {
	const double PI = 3.14159265;
	int h, a;
	double volume, surface_area;

	printf("헬멧의 높이를 입력하세요(양의 정수):");
	scanf("%d", &h);
	printf("헬멧의 반지름을 입력하세요(양의 정수):");
	scanf("%d", &a);

	volume = PI / 6 * h * (3 * a * a + h * h);
	surface_area = 2 * PI * ((double)h / 3 + volume / (PI * h * h)) * h;

	printf("체적 = %lf, 표면적 = %lf\n", volume, surface_area);

	return 0;  
}