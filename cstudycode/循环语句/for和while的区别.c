#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int main(void) {

	// while
	int i = 0;
	//while (i < 10) {
	//	i++;	// ����ִ��
	//	if (i == 5) {
	//		continue;
	//	}
	//	printf("%d\n", i);
	//    // i++;	// ע��i++��λ��, ��ʱ������ѭ��
	//}

	for (i = 1; i < 10; i++) {
		if (i == 5) {
			continue;
		}
		printf("%d\n", i);
	}
	return 0;
}