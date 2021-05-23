#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int main(void) {

	// 数组的声明使用中括号[],表示一组相同类型元素的集合,数据类型 数组名[元素个数];
	//int arr[10];	//数组的声明和赋值不能分开;
	//arr = { 0 };

	int arr[10] = { 0 };

	// 数组元素的访问:通过下标的方式,数组名[下标],数组下标从0开始,到元素个数-1;
	arr[2] = 888;	// 数组元素赋值, 数组名[下标] = 新值;
	printf("%d\n", arr[2]);		//访问, 数组名[下标];

	// 完整实例:

	int ars[10] = { 0 };
	int index = 0;
	for (index = 0; index < 10; index++) {
		ars[index] = index + 1;
	}

	for (index = 0; index < 10; index++) {
		printf("ars[%d] = %d\n", index, ars[index]);
	}

	return 0;
}