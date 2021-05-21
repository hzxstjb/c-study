#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int main(void) {
	// 1
	/*int x, y;
	for (x = 0, y = 0; x <= 2 && y < 5; x++, y++) {
		printf("x=%d, y=%d\n", x, y);
	}*/
	// 2 for实现无限循环
	for (;;) {
		printf("hello\n");
	}
	// 3
	return 0;
}