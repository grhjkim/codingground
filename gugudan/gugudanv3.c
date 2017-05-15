#include <stdio.h>

void gugudan(void)
{
	for (int step = 0; step <= 1; step++) {
		for (int multiplier = 1; multiplier <= 9; multiplier++) {
			for (int dan = 2+step*4; dan <= 5 + step * 4; dan++) {
				printf("%d*%d=%02d ", dan, multiplier, dan * multiplier);
			}
			printf("\n");
		}
		printf("\n");
	}
}

int main()
{
	gugudan();
	return 0;
}

