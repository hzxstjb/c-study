#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int main(void) {
	// 1

	//int x, y;
	//for (x = 0, y = 0; x <= 2 && y < 5; x++, y++) {	// ��������ö��Ÿ���
	//	printf("x=%d, y=%d\n", x, y);
	//}

	// 2 forʵ������ѭ��

	//for (;;) {	// ��ͬ��while(1){ ... }
	//	printf("hello\n");
	//}

	// 3 

	//int i = 0;
	//for (i = 1;; i++) {	// for(exp1;exp2;exp3)  ���exp2Ϊ��,����ʾ����Ϊ����,��������ѭ��
	//	printf("%d", i);
	//}

	//	4

	int i = 0;
	for (i = 1; 0; i++) {	// exp2Ϊ0,��ʾ������Ϊ��,��Զ���ܽ���ѭ��
		printf("haha");
	}


	return 0;
}