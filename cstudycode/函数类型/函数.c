#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

// ����һ���ӷ�����ĺ���,�����в����б�,������,����ֵ����;
int Add(int x, int y) {
	int z = 0;
	z = x + y;
	return z;
}
int main(void) {

	//int a = 10, b = 20, c = 0;
	//c = a + b;
	//printf("c = %d\n", c);

	int a = 10, b = 20, c = 0;
	c = Add(a, b);	// �Ժ����ķ�ʽ����
	printf("c= %d\n", c);
	return 0;
}