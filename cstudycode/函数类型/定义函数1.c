#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

void swap1(int x, int y) {	// ��ֵ
	int tmp = x;
	x = y;
	y = tmp;
}

void swap2(int* x, int* y) {	// ��ַ
	int tmp = *x;
	*x = *y;
	*y = tmp;
}
int main(void) {

	// ���ݽ�������
	int a = 10;
	int b = 20;
	printf("����ǰ, a = %d, b = %d\n", a, b);
	//swap1(a, b);	// **����ʧ��**
	swap2(&a, &b);	// �����ɹ�
	printf("������, a = %d, b = %d\n", a, b);
	return 0;
}