#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

void fun1();	// ����������

int main(void) {

	// c ���������϶��µ�ɨ������, �����ͺ���ʹ���Ǳ�����ǰ����;
	fun1();	//	�����ĵ���
	return 0;
}


// �����Ķ���
void fun1() {
	printf("hello c\n");
}