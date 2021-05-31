#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
// 用递归的方式实现
// 阶乘计算factorial
int factorial(int n) {
	// 1的阶乘是1
	if (n <= 1) {
		return 1;
	}
	return n * factorial(n - 1);
}

// 斐波那契数列fibonacci 
int fibonacci(int n) {
	// 1,1,2,3,5,8,13,21----->第n个数斐波那契数列值前两个数的和
	if (n <= 2) {
		return 1;
	}
	return fibonacci(n - 2) + fibonacci(n - 1);
}
int main(void) {

	int n = 5;
	int ret_fac = factorial(n);
	printf("%d的阶乘是:%d\n", n, ret_fac);

	int ret_fib = fibonacci(n);
	printf("第%d数的斐波那契数列值是:%d\n",n, ret_fib);
	return 0;
}