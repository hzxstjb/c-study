#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int main(void) {
	// 1

	//int x, y;
	//for (x = 0, y = 0; x <= 2 && y < 5; x++, y++) {	// 多个变量用逗号隔开
	//	printf("x=%d, y=%d\n", x, y);
	//}

	// 2 for实现无限循环

	//for (;;) {	// 等同于while(1){ ... }
	//	printf("hello\n");
	//}

	// 3 

	//int i = 0;
	//for (i = 1;; i++) {	// for(exp1;exp2;exp3)  如果exp2为空,即表示条件为恒真,进入无限循环
	//	printf("%d", i);
	//}

	//	4

	int i = 0;
	for (i = 1; 0; i++) {	// exp2为0,表示条件恒为假,永远不能进入循环
		printf("haha");
	}


	return 0;
}