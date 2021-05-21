#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int main(void) {
	//int i = 0;
	//for (i = 1; i < 10; i++) {
	//	printf("%d\n", i);
	//
	//}

	// 打印九九乘法表
	//int x = 0, y = 0;
	//for (x = 1; x <= 9; x++) {
	//	for (y = 1; y <= x; y++) {
	//		printf("%d * %d = %d  ", y, x, x*y);
	//	}
	//	printf("\n");
	//}

	// break,continue关键字
	//int i = 0;
	//for (i = 1; i < 10; i++) {
	//	if (i % 2 == 0) {
	//		continue;	// continue 结束当前的循环,进入下一次循环
	//	}
	//	printf("%d\t", i);
	//}
	//printf("\n");

	int i = 0;
	for (i = 1; i < 100; i++) {
		if (i == 15) {
			break;
		}
		printf("%d\n", i);	// break 结束整个循环
	}
	printf("\n");
	
	return 0;
}