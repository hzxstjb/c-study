#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int main(void) {
	// 输出占位:%d 整数, %c 字符, %s 字符串, %f 单精度浮点数, %lf 双精度浮点数
	printf("%d,  %c,  %s,  %f,  %lf\n", 10, 'a', "hello", 3.14f, 6.01);
	
	// %u 无符号整型

	printf("%u\n", 1);

	// %ld 长整型
	printf("%ld\n", 1L);
	return 0;
}