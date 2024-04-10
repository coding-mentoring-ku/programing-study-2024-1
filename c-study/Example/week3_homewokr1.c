#include <stdio.h>
#define HOUR_PER_MIN 60
#define DAY_PER_HOUR 24

int main() {
	int h, m, c;

	scanf("%d %d", &h, &m);
	scanf("%d", &c);

	m += c;

	if (m >= 60) {
		h += m / HOUR_PER_MIN;
		m %= HOUR_PER_MIN;
	}

	if (h >= DAY_PER_HOUR) {
		h -= DAY_PER_HOUR;
	}

	printf("%d %d", h, m);

	return 0;
}