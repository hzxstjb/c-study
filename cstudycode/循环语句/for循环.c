#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int main(void) {
	//int i = 0;
	//for (i = 1; i < 10; i++) {
	//	printf("%d\n", i);
	//
	//}

	// ��ӡ�žų˷���
	//int x = 0, y = 0;
	//for (x = 1; x <= 9; x++) {
	//	for (y = 1; y <= x; y++) {
	//		printf("%d * %d = %d  ", y, x, x*y);
	//	}
	//	printf("\n");
	//}

	// break,continue�ؼ���
	//int i = 0;
	//for (i = 1; i < 10; i++) {
	//	if (i % 2 == 0) {
	//		continue;	// continue ������ǰ��ѭ��,������һ��ѭ��
	//	}
	//	printf("%d\t", i);
	//}
	//printf("\n");

	int i = 0;
	for (i = 1; i < 100; i++) {
		if (i == 15) {
			break;
		}
		printf("%d\n", i);	// break ��������ѭ��
	}
	printf("\n");
	
	return 0;
}