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

// �����ݹ�ķ�ʽʵ��쳲��������е�����
// ��n�ܴ�ʱ, ����Ч�ʵ���(��������Ƕ�׺���),������ѭ���ķ�ʽ���Խ��:
int fibonacci_2(int n) {
	int a = 1;
	int b = 1;
	int c = 1;
	while (n > 2) {	// ���n����2
		c = a + b;	// ��ǰ��Ϊǰ�����ĺ�
		a = b;		// ��ǰһ����Ϊǰ�ڶ�����
		b = c;		// �õ�ǰ��Ϊǰһ����
		n--;		// n--
	}
	return c;
}
int main(void) {

	int n = 5;
	int ret_fac = factorial(n);
	printf("%d�Ľ׳���:%d\n", n, ret_fac);

	int ret_fib = fibonacci(n);
	printf("��%d����쳲���������ֵ��:%d\n",n, ret_fib);

	//int fib40_1 = fibonacci(50);	// ����ʱ�����10����;
	//printf("%d", fib40_1);
	int fib40_2 = fibonacci_2(50);
	printf("%d\n", fib40_2);

	return 0;
}