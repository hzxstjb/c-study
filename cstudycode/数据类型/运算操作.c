#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int main(void) {

	// ++, -- 自增自减操作
	// , 逗号运算符,从左到右一次计算,结果为最右边的值;
	int a = 5;
	int b = 8;
	int c = (a++, b += a, b *= 2);
	// a=5-->a++-->a=6--->b=8+6=14,b = 14*2=28;
	printf("c = %d\n", c);	// b = 28

	return 0;
}