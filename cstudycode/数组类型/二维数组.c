#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int main(void) {

	int arr[3][4] = { 0 };	// 3��4�е�����

	int i = 0, j = 0;
	for (i = 0; i < 3; i++) {
		for (j = 0; j < 4; j++) {
			printf("arr[%d][%d] = %d\n", i, j, arr[i][j]);
		}
	}

	return 0;
}