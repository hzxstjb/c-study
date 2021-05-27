#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

void fun1();	// 函数的声明

int main(void) {

	// c 语言是自上而下的扫描代码的, 变量和函数使用是必须提前声明;
	fun1();	//	函数的调用
	return 0;
}


// 函数的定义
void fun1() {
	printf("hello c\n");
}