#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int main(void) {

	// 字符型:用单引号括起来的单个字符
	char ch = 'A';
	printf("%c = %d\n", ch,ch);
	// char占1个字节
	printf("char类型占用%d个字节\n", sizeof(ch));	//sizeof(变量或类型)计算占用内存字节数
	// 整形
	short sint = -10;
	unsigned short usint = 10;	// 定义无符号使用关键字unsigned
	int iint = -10;		// 整型默认类型为int
	long lint = -10L;	// long长整型字面量用l或L修饰
	printf("%d, %d, %ld\n", usint, iint, lint);
	// long long llint = 10;
	// short占2个字节, int占4个字节, long规定大于或等于int类型,这个也是占用4个字节
	printf("short int类型占用%d个字节, int类型占用%d个字节, long int类型占用%d个字节\n", sizeof(sint), sizeof(iint), sizeof(lint));
	// 浮点型
	float f = 3.33F;	// 单精度字面用f或F修饰
	double d = 6.31;	// 浮点数默认类型为double
	// float占4个字节, double占8个字节
	printf("float类型占用%d个字节, double类型占用%d个字节\n", sizeof(f), sizeof(d));
	return 0;
}