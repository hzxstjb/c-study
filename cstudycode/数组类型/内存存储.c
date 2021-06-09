#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

// 栈空间默认是从高到低的内存地址单元进行存储
// 数组根据索引顺序从低到高存储


 int main(int argc, char const *argv[])
 {
	 int a = 10;
	 int arr[5] = { 0 };
	 printf(" &a = %p\n", &a);	//  &a = 00F6FC88 大:	先定义赋值的在高地址
	 printf("arr = %p\n", arr);	// arr = 00F6FC6C 小:	后定义赋值的在低地址
	 // 两个地址差28: arr 5个int元素占20个字节, 和a之间相差两个int元素的空间
 	 return 0;
 }