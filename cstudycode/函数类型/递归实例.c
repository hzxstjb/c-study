#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
// �õݹ�ķ�ʽʵ��
// �׳˼���factorial
int factorial(int n) {
	// 1�Ľ׳���1
	if (n <= 1) {
		return 1;
	}
	return n * factorial(n - 1);
}

// 쳲���������fibonacci 
int fibonacci(int n) {
	// 1,1,2,3,5,8,13,21----->��n����쳲���������ֵǰ�������ĺ�
	if (n <= 2) {
		return 1;
	}
	return fibonacci(n - 2) + fibonacci(n - 1);
}
int main(void) {

	int n = 5;
	int ret_fac = factorial(n);
	printf("%d�Ľ׳���:%d\n", n, ret_fac);

	int ret_fib = fibonacci(n);
	printf("��%d����쳲���������ֵ��:%d\n",n, ret_fib);
	return 0;
}