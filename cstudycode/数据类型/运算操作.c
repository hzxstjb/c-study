#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int main(void) {

	// ++, -- �����Լ�����
	// , ���������,������һ�μ���,���Ϊ���ұߵ�ֵ;
	int a = 5;
	int b = 8;
	int c = (a++, b += a, b *= 2);
	// a=5-->a++-->a=6--->b=8+6=14,b = 14*2=28;
	printf("c = %d\n", c);	// b = 28

	return 0;
}