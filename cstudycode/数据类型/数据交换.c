#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

// 方式1:使用相加的方法(当两操作数临界数值范围时,相加的结果就超出数组范围,产生数据溢出)
void swapvalue1(int a, int b) {
	printf("交换前:a=%d, b=%d\n", a, b);
	a = a + b;
	b = a - b;
	a = a - b;
	printf("交换后:a=%d, b=%d\n", a, b);
}

// 方式2:使用异或的方法
void swapvalue2(int a, int b) {
	printf("交换前:a=%d, b=%d\n", a, b);
	a = a ^ b;
	b = a ^ b;
	a = a ^ b;
	printf("交换后:a=%d, b=%d\n", a, b);
}

int main(void) {

	// 不使用第三个变量交换两个变量的值
	int a = 10, b = 20;

	swapvalue1(a, b);
	swapvalue2(a, b);
}