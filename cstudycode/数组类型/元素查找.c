#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int main(void) {
	
	// 定义一个有序数列
	int arrs[] = { 1,2,3,4,5,6,7,8,9,10 };
	int size = sizeof(arrs) / sizeof(arrs[0]);	// size表示数组元素的个数

	int targer = 18;	//需要查找的目标值
	int count = 0;	// 定义一个变量统计查找所需的次数, 越小效率越高;
	int i = 0;
	for (i = 0; i < size; i++) {
		count++;
		if (targer == arrs[i]) {	// 判断指定索引元素是否等于目标值
			printf("目标%d的索引号是%d\n",targer,i);
			break;
		}
	}
	if (i >= size) {
		printf("sorry,没有找到%d\n", targer);
	}
	printf("查找一共进行了%d次\n", count);

	return 0;
}