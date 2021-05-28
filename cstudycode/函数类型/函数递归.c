#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

// 函数的递归就是函数调用自身函数
// 实例:输入一个数字, 按顺序逐个打印输出
void display(int num) {
	if (num > 9) {
		display(num / 10);
	}
	printf("%d\n", num % 10);
}
int main(void) {

	int sc = 0;
	scanf("%d", &sc);

	display(sc);

	return 0;
}