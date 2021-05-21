#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int main(void) {
	//int i = 0;
	//for (i = 1; i < 10; i++) {
	//	printf("%d\n", i);
	//
	//}

	// ´òÓ¡¾Å¾Å³Ë·¨±í
	int x = 0, y = 0;
	for (x = 1; x <= 9; x++) {
		for (y = 1; y <= x; y++) {
			printf("%d * %d = %d  ", y, x, x*y);
		}
		printf("\n");
	}
	return 0;
}