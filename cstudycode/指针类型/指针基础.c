#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int main(void) {

	// 32λ�����ϵͳ��32����ַ����
	// ��00000000000000000000000000000000---11111111111111111111111111111111
	// 00000000 -- FFFFFFFF ����32λϵͳ��ַ������4���ֽڵĿռ�������,��32λϵͳָ��Ĵ�СΪ4���ֽ�

	printf("%d\n", sizeof(char*));	// 4
	printf("%d\n", sizeof(short*));	// 4
	printf("%d\n", sizeof(int*));	// 4
	printf("%d\n", sizeof(double*));	// 4
	printf("%d\n", sizeof(long*));	// 4

	// ָ��Ķ���
	int a = 20;
	int* p = &a;	// ʹ��*��
	printf("%p\n", p);	// %p��ʾ��ӡ��ַ
	*p = 200;
	printf("a = %d\n", a);	// �����*��ʾ������

	return 0;
}