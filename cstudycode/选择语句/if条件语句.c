#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int main(void) {

	int age = 98;

	// if

	//if (18 > age) {

	//	printf("未成年\n");
	//}



	// if ... else ...

	//if (18 > age) {
	//	printf("未成年\n");
	//}
	//else {
	//	printf("已成年\n");
	//}

	// 注意:else总是和最近的未被匹配的if进行匹配
	if (age < 18) {
		printf("未成年\n");
	}
	else if (age < 60) {
		printf("中年人\n");
	}
	else if (age < 90) {
		printf("老年人\n");
	}
		else // 和是否缩进无关
	{
		printf("老寿星\n");
	}

	return 0;
}