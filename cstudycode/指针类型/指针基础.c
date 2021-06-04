#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int main(void) {

	// 32位计算机系统中32根地址总线
	// 从00000000000000000000000000000000---11111111111111111111111111111111
	// 00000000 -- FFFFFFFF 所以32位系统地址可以用4个字节的空间来保存,即32位系统指针的大小为4个字节

	printf("%d\n", sizeof(char*));	// 4
	printf("%d\n", sizeof(short*));	// 4
	printf("%d\n", sizeof(int*));	// 4
	printf("%d\n", sizeof(double*));	// 4
	printf("%d\n", sizeof(long*));	// 4

	// 指针的定义
	int a = 20;
	int* p = &a;	// 使用*号
	printf("%p\n", p);	// %p表示打印地址
	*p = 200;
	printf("a = %d\n", a);	// 这里的*表示解引用

	return 0;
}