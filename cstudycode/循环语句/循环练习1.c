#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int main(void) {

	// ��һ�����Ľ׳�(��:��5�Ľ׳�)
	//int ret = 1, idx = 0;

	//for (idx = 1; idx <= 5; idx++) {
	//	ret = ret * idx;
	//}

	//printf("5�Ľ׳˽����:%d\n", ret);

	// ��1! + 2! + 3! + 4! + 5! = ?
	// ǰ���Ѿ�֪���׳˵��㷨
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

	// �Ż�
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