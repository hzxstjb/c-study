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

	// �����ĵ���: Ƕ�׵��ú���ʽ����

	// ��򵥵�Ƕ�׵���
	//printf("��������?\n");
	//// Stack overflow ջ���
	//main();
	printf("main...\n");
	demo1();

	// ��ʽ����
	printf("%d\n", printf("%d\n", printf("hello\n")));	// printf()��������ֵΪint����,��ʾ��ӡ���ַ��ĸ���;
	return 0;
}