#include <stdio.h>
#include <math.h>

int main() {
	const double PI = 3.14159265;
	int h, a;
	double volume, surface_area;

	printf("����� ���̸� �Է��ϼ���(���� ����):");
	scanf("%d", &h);
	printf("����� �������� �Է��ϼ���(���� ����):");
	scanf("%d", &a);

	volume = PI / 6 * h * (3 * a * a + h * h);
	surface_area = 2 * PI * ((double)h / 3 + volume / (PI * h * h)) * h;

	printf("ü�� = %lf, ǥ���� = %lf\n", volume, surface_area);

	return 0;  
}