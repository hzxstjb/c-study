#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

 int main(int argc, char const *argv[])
 {
	 int a = 0x11223344;
	 char* pc = &a;
	 int* pi = &a;

	 // 因为32位系统的指针类型是4个字节的,所以能够存储任何数据类型的地址值
	 printf("pc = %p\n", pc);	// 00CFF81C
	 printf("pi = %p\n", pi);	// 00CFF81C
	 // 那么指定指针类型有什么作用呢?

	 // 声明指针类型的作用:
	 // 1. 指针解引用时可操作内存的字节数
	 *pc = 0;
	 printf("a = %d\n", a);		// 0x00CFF798 值 00 33 22 11	操作了1个字节
	 *pi = 0;
	 printf("a = %d\n", a);		// 0x00CFF798 值 00 00 00 00操作了4个字节
	 
	 printf("---------------------\n");
	 // 2. 指针运算可移动的字节数
	 int b[5] = { 0 };
	 char* pcb = b;
	 int* pib = b;
	 int i = 0;
	 for (i = 0; i < 5; i++) {		//{0,0,0,0,0} 数组总共占20个字节,只修改了1*5=前5个字节
		 *(pcb + i) = i;
	 }
	 for (i = 0; i < 5; i++) {
		 printf("%d\n", b[i]);
	 }

	 printf("-------------------\n");
	 for (i = 0; i < 5; i++) {		// 数组总共占20个字节,修改了4*5=20个字节
		 *(pib + i) = i;
	 }

	 for (i = 0; i < 5; i++) {
		 printf("%d\n", b[i]);
	 }


 	return 0;
 }