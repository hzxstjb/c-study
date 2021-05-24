#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int main(void) {

	// while
	int i = 0;
	//while (i < 10) {
	//	i++;	// 正常执行
	//	if (i == 5) {
	//		continue;
	//	}
	//	printf("%d\n", i);
	//    // i++;	// 注意i++的位置, 此时程序死循环
	//}

	for (i = 1; i < 10; i++) {
		if (i == 5) {
			continue;
		}
		printf("%d\n", i);
	}
	return 0;
}