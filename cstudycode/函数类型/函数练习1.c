#define _CRT_SECURE_NO_WARNINGS 

#include <stdio.h>
#include <math.h>
// 素数的概念:指除了1和它本身以外,不能被任何整数整除的数
//int isPrimer(int n) {
//	int i = 0;
//	for (i = 2; i < n; i++) {
//		if (n % i == 0) {
//			return 0;
//		}
//	}
//	return 1;
//}

// 优化
int isPrimer(int n) {
	int i = 0;
	for (i = 2; i <= sqrt(n); i++) {	//sqrt()开平方函数,徐导入math.h库
		if (n % i == 0) {
			return 0;
		}
	}
	return 1;
}
int main(void) {

	// 用函数的方式实现素数的判断

	int num = 0;
	for (num = 100; num <= 200; num++) {
		if (isPrimer(num)==1) {
			printf("%d\n", num);
		}
	}
	return 0;
}