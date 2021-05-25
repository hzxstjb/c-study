#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int main(void) {

	// 求一个数的阶乘(如:求5的阶乘)
	//int ret = 1, idx = 0;

	//for (idx = 1; idx <= 5; idx++) {
	//	ret = ret * idx;
	//}

	//printf("5的阶乘结果是:%d\n", ret);

	// 求1! + 2! + 3! + 4! + 5! = ?
	// 前面已经知道阶乘的算法
	//int i = 0, j = 0;
	//int ret = 0;
	//int sum = 0;
	//for (i = 1; i <= 5; i++) {
	//	ret = 1;
	//	for(j = 1; j <= i; j++) {
	//		ret = ret * j;
	//	}
	//	sum = sum + ret;
	//}
	//printf("1! + 2! + 3! + 4! + 5! = %d\n", sum);

	// 优化
	int i = 0;
	int sum = 0;
	int ret = 1;
	for (i = 1; i <= 5; i++) {
		ret = ret * i;
		sum = sum + ret;
	}
	printf("1! + 2! + 3! + 4! + 5! = %d\n", sum);

	return 0;
}