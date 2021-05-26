#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

// 定义一个加法运算的函数,函数有参数列表,函数名,返回值类型;
int Add(int x, int y) {
	int z = 0;
	z = x + y;
	return z;
}
int main(void) {

	//int a = 10, b = 20, c = 0;
	//c = a + b;
	//printf("c = %d\n", c);

	int a = 10, b = 20, c = 0;
	c = Add(a, b);	// 以函数的方式计算
	printf("c= %d\n", c);
	return 0;
}