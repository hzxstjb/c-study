#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

void demo1();
void demo2();
void demo1() {
	printf("demo1....\n");
	demo2();
}

void demo2() {
	printf("demo2....\n");
}
int main(void) {

	// 函数的调用: 嵌套调用和链式调用

	// 最简单的嵌套调用
	//printf("死机了吗?\n");
	//// Stack overflow 栈溢出
	//main();
	printf("main...\n");
	demo1();

	// 链式调用
	printf("%d\n", printf("%d\n", printf("hello\n")));	// printf()函数返回值为int类型,表示打印了字符的个数;
	return 0;
}