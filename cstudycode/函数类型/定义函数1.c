#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

void swap1(int x, int y) {	// 传值
	int tmp = x;
	x = y;
	y = tmp;
}

void swap2(int* x, int* y) {	// 传址
	int tmp = *x;
	*x = *y;
	*y = tmp;
}
int main(void) {

	// 数据交换函数
	int a = 10;
	int b = 20;
	printf("交换前, a = %d, b = %d\n", a, b);
	//swap1(a, b);	// **交换失败**
	swap2(&a, &b);	// 交换成功
	printf("交换后, a = %d, b = %d\n", a, b);
	return 0;
}