#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int main(void) {

	// 定义一个有序数组
	int arrs[] = { 1,2,3,4,5,6,7,8,9,10 };
	int size = sizeof(arrs) / sizeof(arrs[0]);
	int targer = 5;
	int count = 0;
	// 通过二分查找进行优化
	int left = 0;	// 左边界索引
	int right = size - 1;	// 右边界索引
	int center = 0;		// 中间数索引

	while (left <= right) {
		count++;
		center = (left + right) / 2;	// 计算中间值
		if (targer > arrs[center]) {
			left = center + 1;
		}
		else if (targer < arrs[center]) {
			right = center - 1;
		} else if(targer == arrs[center]) {
			printf("目标%d的索引号是%d\n", targer, center);
			break;
		}
	}
	if (left > right) {
		printf("sorry,没有找到%d\n", targer);
	}
	printf("查找一共进行了%d次\n", count);
	
	return 0;
}