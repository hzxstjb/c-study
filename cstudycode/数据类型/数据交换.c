#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

// ��ʽ1:ʹ����ӵķ���(�����������ٽ���ֵ��Χʱ,��ӵĽ���ͳ������鷶Χ,�����������)
void swapvalue1(int a, int b) {
	printf("����ǰ:a=%d, b=%d\n", a, b);
	a = a + b;
	b = a - b;
	a = a - b;
	printf("������:a=%d, b=%d\n", a, b);
}

// ��ʽ2:ʹ�����ķ���
void swapvalue2(int a, int b) {
	printf("����ǰ:a=%d, b=%d\n", a, b);
	a = a ^ b;
	b = a ^ b;
	a = a ^ b;
	printf("������:a=%d, b=%d\n", a, b);
}

int main(void) {

	// ��ʹ�õ�����������������������ֵ
	int a = 10, b = 20;

	swapvalue1(a, b);
	swapvalue2(a, b);
}