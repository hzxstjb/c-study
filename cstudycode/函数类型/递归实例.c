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

// 函数递归的方式实现斐波那契数列的问题
// 当n很大时, 运行效率低下(由于自身嵌套很深),这是用循环的方式可以解决:
int fibonacci_2(int n) {
	int a = 1;
	int b = 1;
	int c = 1;
	while (n > 2) {	// 如果n大于2
		c = a + b;	// 当前数为前两数的和
		a = b;		// 让前一个数为前第二个数
		b = c;		// 让当前数为前一个数
		n--;		// n--
	}
	return c;
}
int main(void) {

	int n = 5;
	int ret_fac = factorial(n);
	printf("%d的阶乘是:%d\n", n, ret_fac);

	int ret_fib = fibonacci(n);
	printf("第%d数的斐波那契数列值是:%d\n",n, ret_fib);

	//int fib40_1 = fibonacci(50);	// 运行时间估计10分钟;
	//printf("%d", fib40_1);
	int fib40_2 = fibonacci_2(50);
	printf("%d\n", fib40_2);

	return 0;
}